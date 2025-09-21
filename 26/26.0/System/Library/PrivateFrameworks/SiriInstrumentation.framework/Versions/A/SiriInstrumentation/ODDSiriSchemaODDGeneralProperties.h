@class NSString, UAFSchemaUAFAssetSetStatus, NSData, SISchemaISOLocale;

@interface ODDSiriSchemaODDGeneralProperties : SISchemaInstrumentationMessage {
    struct { unsigned char storefrontId : 1; unsigned char UTCOffset : 1; unsigned char isStoreDemoMode : 1; unsigned char buildInstallationTimestampInSecondsSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *systemLocale;
@property (nonatomic) BOOL hasSystemLocale;
@property (nonatomic) int storefrontId;
@property (nonatomic) BOOL hasStorefrontId;
@property (nonatomic) int UTCOffset;
@property (nonatomic) BOOL hasUTCOffset;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (copy, nonatomic) NSString *deviceOS;
@property (nonatomic) BOOL hasDeviceOS;
@property (nonatomic) BOOL isStoreDemoMode;
@property (nonatomic) BOOL hasIsStoreDemoMode;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasBuildInstallationTimestampInSecondsSince1970;
@property (retain, nonatomic) UAFSchemaUAFAssetSetStatus *assetSetStatus;
@property (nonatomic) BOOL hasAssetSetStatus;
@property (copy, nonatomic) NSString *dataCollectionId;
@property (nonatomic) BOOL hasDataCollectionId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteUTCOffset;
- (void)deleteAssetSetStatus;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deleteDataCollectionId;
- (void)deleteDeviceOS;
- (void)deleteDeviceType;
- (void)deleteIsStoreDemoMode;
- (void)deleteModelNumber;
- (void)deleteStorefrontId;
- (void)deleteSystemLocale;

@end
