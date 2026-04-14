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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetName;
- (void)deleteAssetLocale;
- (void)deleteAssetVersion;
- (void)deleteTrialNamespace;

@end
