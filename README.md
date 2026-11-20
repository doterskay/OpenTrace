<div align="center">

# OpenTrace

**Static Analysis Toolkit for Minecraft Java**

<sub>A project by OpenSoftME</sub>



</div>

---

## Overview

OpenTrace is a C++ application designed for static analysis of Java modifications.

Its purpose is to identify potentially suspicious modifications, cheat clients, and third-party tools by examining file structures, metadata, code-related indicators, and signatures.

The project is focused on providing informative analysis results rather than making automatic conclusions based on individual detections.

## Planned Features

| Feature | Description |
|:--|:--|
| **File Discovery** | Finding and identifying files for analysis |
| **Metadata Analysis** | Collecting file properties and metadata |
| **JAR Inspection** | Examining Java archive contents |
| **String Analysis** | Searching for relevant textual indicators |
| **Class Analysis** | Examining classes, methods, and structures |
| **Signature Matching** | Comparing files against known indicators |
| **Detection Engine** | Correlating multiple findings |
| **Risk Assessment** | Estimating risk based on collected evidence |
| **Reporting** | Generating readable scan reports |

## Technology

<div align="center">

**C++20** · **STL** · **CMake** · **libzip** · **OpenSSL** · **nlohmann/json** · **libcurl**

</div>

## Development Status

<sub>PRE-ALPHA · EARLY DEVELOPMENT</sub>

OpenTrace is currently in the initial development stage.

The architecture, core components, and detection approach are being designed. Most listed features are planned and have not yet been implemented.

## Principles

- Static analysis — inspected files are never executed.
- Evidence-based detection — findings should have an understandable explanation.
- False-positive reduction — individual indicators are not treated as definitive proof.
- Modularity — analysis components remain independent and extensible.
- Transparency — results should show what was detected and why.

---

<div align="center">
<sub>OpenTrace · OpenSoftME</sub>
</div>

---

# Русский

## О проекте

OpenTrace — приложение на C++ для статического анализа модификаций Java.

Проект предназначен для выявления потенциально подозрительных модификаций, чит-клиентов и сторонних инструментов путём изучения структуры файлов, метаданных, программных индикаторов и сигнатур.

Цель OpenTrace — предоставлять информативные результаты анализа, а не делать автоматические выводы на основе отдельных обнаружений.

## Планируемые возможности

| Возможность | Описание |
|:--|:--|
| **Поиск файлов** | Обнаружение и идентификация файлов для анализа |
| **Анализ метаданных** | Сбор свойств и информации о файлах |
| **Анализ JAR** | Изучение содержимого Java-архивов |
| **Анализ строк** | Поиск текстовых индикаторов |
| **Анализ классов** | Исследование классов, методов и структуры |
| **Сигнатуры** | Сопоставление с известными индикаторами |
| **Detection Engine** | Корреляция обнаруженных признаков |
| **Оценка риска** | Определение уровня риска на основе собранных данных |
| **Отчёты** | Формирование читаемых результатов проверки |

## Технологии

<div align="center">

**C++20** · **STL** · **CMake** · **libzip** · **OpenSSL** · **nlohmann/json** · **libcurl**

</div>

## Статус разработки

<sub>PRE-ALPHA · РАННЯЯ РАЗРАБОТКА</sub>

OpenTrace находится на начальном этапе разработки.

В настоящее время проектируются архитектура, основные компоненты и методы обнаружения. Большинство перечисленных функций пока не реализовано.

## Принципы

- Статический анализ — проверяемые файлы не запускаются.
- Анализ на основе доказательств — у каждого обнаружения должно быть понятное объяснение.
- Снижение ложных срабатываний — отдельные индикаторы не считаются окончательным доказательством.
- Модульность — компоненты анализа независимы и расширяемы.
- Прозрачность — пользователь должен понимать, что именно обнаружено и почему.

---

<div align="center">
<sub>OpenTrace · OpenSoftME</sub>
</div>
