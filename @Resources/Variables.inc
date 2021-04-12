[Variables]

; General
Font=Century Gothic
RightSide=(#WORKAREAWIDTH#-250)
Language=en-US

; Weather
LocationCode=d3c3a000d483f50eebe7dbf6f2e51202805d17a3e56f60b59033b48108f3783f
WeatherUrl=https://weather.com/#Language#/weather/today/l/#LocationCode#

CurrentObservations=(?siU)\\"getSunV3CurrentObservationsUrlConfig\\":.*{\\"cloudCeiling\\":.*,\\"cloudCoverPhrase\\":\\".*\\",\\"dayOfWeek\\":\\".*\\",\\"dayOrNight\\":\\".*\\",\\"expirationTimeUtc\\":.*,\\"iconCode\\":(.*),\\"iconCodeExtend\\":.*,\\"obsQualifierCode\\":.*,\\"obsQualifierSeverity\\":.*,\\"precip1Hour\\":.*,\\"precip6Hour\\":.*,\\"precip24Hour\\":.*,\\"pressureAltimeter\\":(.*),\\"pressureChange\\":(.*),\\"pressureMeanSeaLevel\\":.*,\\"pressureTendencyCode\\":.*,\\"pressureTendencyTrend\\":\\"(.*)\\",\\"relativeHumidity\\":(.*),\\"snow1Hour\\":.*,\\"snow6Hour\\":.*,\\"snow24Hour\\":.*,\\"sunriseTimeLocal\\":.*,\\"sunriseTimeUtc\\":.*,\\"sunsetTimeLocal\\":.*,\\"sunsetTimeUtc\\":.*,\\"temperature\\":(.*),\\"temperatureChange24Hour\\":.*,\\"temperatureDewPoint\\":(.*),\\"temperatureFeelsLike\\":(.*),\\"temperatureHeatIndex\\":.*,\\"temperatureMax24Hour\\":.*,\\"temperatureMaxSince7Am\\":.*,\\"temperatureMin24Hour\\":.*,\\"temperatureWindChill\\":.*,\\"uvDescription\\":\\"(.*)\\",\\"uvIndex\\":(.*),\\"validTimeLocal\\":\\"(.*)\\",\\"validTimeUtc\\":.*,\\"visibility\\":(.*),\\"windDirection\\":.*,\\"windDirectionCardinal\\":\\"(.*)\\",\\"windGust\\":(.*),\\"windSpeed\\":(.*),\\"wxPhraseLong\\":\\"(.*)\\",\\"wx