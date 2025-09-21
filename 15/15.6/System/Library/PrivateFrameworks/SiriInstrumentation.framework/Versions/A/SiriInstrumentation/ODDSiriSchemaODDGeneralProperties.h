@class NSString, UAFSchemaUAFAssetSetStatus, NSData, SISchemaISOLocale;

@interface ODDSiriSchemaODDGeneralProperties : SISchemaInstrumentationMessage {
    struct { unsigned char storefrontId : 1; unsigned char UTCOffset : 1; unsigned char isStoreDemoMode : 1; unsigned char buildInstallationTimestampInSecondsSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *systemLocale;
@property (nonatomic) char hasSystemLocale;
@property (nonatomic) int storefrontId;
@property (nonatomic) char hasStorefrontId;
@property (nonatomic) int UTCOffset;
@property (nonatomic) char hasUTCOffset;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char hasDeviceType;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) char hasModelNumber;
@property (copy, nonatomic) NSString *deviceOS;
@property (nonatomic) char hasDeviceOS;
@property (nonatomic) char isStoreDemoMode;
@property (nonatomic) char hasIsStoreDemoMode;
@property (nonatomic) unsigned long long buildInstallationTimestampInSecondsSince1970;
@property (nonatomic) char hasBuildInstallationTimestampInSecondsSince1970;
@property (retain, nonatomic) UAFSchemaUAFAssetSetStatus *assetSetStatus;
@property (nonatomic) char hasAssetSetStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUTCOffset;
- (void)deleteAssetSetStatus;
- (void)deleteBuildInstallationTimestampInSecondsSince1970;
- (void)deleteDeviceOS;
- (void)deleteDeviceType;
- (void)deleteIsStoreDemoMode;
- (void)deleteModelNumber;
- (void)deleteStorefrontId;
- (void)deleteSystemLocale;
- (id)suppressMessageUnderConditions;

@end
