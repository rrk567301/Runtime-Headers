@class NSString, NSArray, NSData;

@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSArray *featureFlags;
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
- (void)addFeatureFlags:(id)a0;
- (void)clearFeatureFlags;
- (void)deleteAssetVersion;
- (void)deleteFeatureFlags;
- (id)featureFlagsAtIndex:(unsigned long long)a0;
- (unsigned long long)featureFlagsCount;

@end
