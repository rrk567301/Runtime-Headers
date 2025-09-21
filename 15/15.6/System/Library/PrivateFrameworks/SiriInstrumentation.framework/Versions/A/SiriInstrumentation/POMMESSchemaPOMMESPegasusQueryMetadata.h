@class NSString, NSData;

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasLatitude : 1; unsigned char hasLongitude : 1; unsigned char hasCountryCode : 1; unsigned char hasStorefront : 1; unsigned char hasSiriLocale : 1; unsigned char uiScale : 1; unsigned char isNavigationMode : 1; unsigned char temperatureScale : 1; unsigned char measurementSystem : 1; unsigned char installedAppsSignatureLength : 1; unsigned char heySiriEnabled : 1; unsigned char locationAgeInSeconds : 1; unsigned char locationSource : 1; unsigned char locationPreciseStatus : 1; } _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) char hasHasLatitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) char hasHasLongitude;
@property (nonatomic) char hasCountryCode;
@property (nonatomic) char hasHasCountryCode;
@property (nonatomic) char hasStorefront;
@property (nonatomic) char hasHasStorefront;
@property (nonatomic) char hasSiriLocale;
@property (nonatomic) char hasHasSiriLocale;
@property (nonatomic) float uiScale;
@property (nonatomic) char hasUiScale;
@property (nonatomic) char isNavigationMode;
@property (nonatomic) char hasIsNavigationMode;
@property (nonatomic) int temperatureScale;
@property (nonatomic) char hasTemperatureScale;
@property (nonatomic) int measurementSystem;
@property (nonatomic) char hasMeasurementSystem;
@property (nonatomic) unsigned int installedAppsSignatureLength;
@property (nonatomic) char hasInstalledAppsSignatureLength;
@property (copy, nonatomic) NSString *storefrontValue;
@property (nonatomic) char hasStorefrontValue;
@property (nonatomic) char heySiriEnabled;
@property (nonatomic) char hasHeySiriEnabled;
@property (nonatomic) unsigned int locationAgeInSeconds;
@property (nonatomic) char hasLocationAgeInSeconds;
@property (nonatomic) int locationSource;
@property (nonatomic) char hasLocationSource;
@property (nonatomic) int locationPreciseStatus;
@property (nonatomic) char hasLocationPreciseStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasCountryCode;
- (void)deleteHasLatitude;
- (void)deleteHasLongitude;
- (void)deleteHasSiriLocale;
- (void)deleteHasStorefront;
- (void)deleteHeySiriEnabled;
- (void)deleteInstalledAppsSignatureLength;
- (void)deleteIsNavigationMode;
- (void)deleteLocationAgeInSeconds;
- (void)deleteLocationPreciseStatus;
- (void)deleteLocationSource;
- (void)deleteMeasurementSystem;
- (void)deleteStorefrontValue;
- (void)deleteTemperatureScale;
- (void)deleteUiScale;
- (id)suppressMessageUnderConditions;

@end
