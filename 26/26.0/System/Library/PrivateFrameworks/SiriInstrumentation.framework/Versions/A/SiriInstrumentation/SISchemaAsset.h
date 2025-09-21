@class NSString, SISchemaVersion, NSData;

@interface SISchemaAsset : SISchemaInstrumentationMessage {
    struct { unsigned char assetLocale : 1; } _has;
}

@property (copy, nonatomic) NSString *trialNamespace;
@property (nonatomic) BOOL hasTrialNamespace;
@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (retain, nonatomic) SISchemaVersion *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) int assetLocale;
@property (nonatomic) BOOL hasAssetLocale;
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
- (void)deleteAssetName;
- (void)deleteAssetLocale;
- (void)deleteAssetVersion;
- (void)deleteTrialNamespace;

@end
