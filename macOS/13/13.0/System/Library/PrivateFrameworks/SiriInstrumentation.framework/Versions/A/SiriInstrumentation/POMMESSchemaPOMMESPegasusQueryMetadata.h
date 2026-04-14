@class NSString, NSData;

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasLatitude : 1; unsigned char hasLongitude : 1; unsigned char hasCountryCode : 1; unsigned char hasStorefront : 1; unsigned char hasSiriLocale : 1; unsigned char uiScale : 1; unsigned char isNavigationMode : 1; unsigned char temperatureScale : 1; unsigned char measurementSystem : 1; unsigned char installedAppsSignatureLength : 1; unsigned char heySiriEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasHasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasHasLongitude;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasHasCountryCode;
@property (nonatomic) BOOL hasStorefront;
@property (nonatomic) BOOL hasHasStorefront;
@property (nonatomic) BOOL hasSiriLocale;
@property (nonatomic) BOOL hasHasSiriLocale;
@property (nonatomic) float uiScale;
@property (nonatomic) BOOL hasUiScale;
@property (nonatomic) BOOL isNavigationMode;
@property (nonatomic) BOOL hasIsNavigationMode;
@property (nonatomic) int temperatureScale;
@property (nonatomic) BOOL hasTemperatureScale;
@property (nonatomic) int measurementSystem;
@property (nonatomic) BOOL hasMeasurementSystem;
@property (nonatomic) unsigned int installedAppsSignatureLength;
@property (nonatomic) BOOL hasInstalledAppsSignatureLength;
@property (copy, nonatomic) NSString *storefrontValue;
@property (nonatomic) BOOL hasStorefrontValue;
@property (nonatomic) BOOL heySiriEnabled;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteHasLatitude;
- (void)deleteHasLongitude;
- (void)deleteHasCountryCode;
- (void)deleteHasStorefront;
- (void)deleteHasSiriLocale;
- (void)deleteUiScale;
- (void)deleteIsNavigationMode;
- (void)deleteTemperatureScale;
- (void)deleteMeasurementSystem;
- (void)deleteInstalledAppsSignatureLength;
- (void)deleteStorefrontValue;
- (void)deleteHeySiriEnabled;

@end
