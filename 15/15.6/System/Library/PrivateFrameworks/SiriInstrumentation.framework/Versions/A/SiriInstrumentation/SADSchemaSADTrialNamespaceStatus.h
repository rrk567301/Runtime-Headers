@class NSArray, SISchemaVersion, SADSchemaSADTrialRollout, NSData;

@interface SADSchemaSADTrialNamespaceStatus : SISchemaInstrumentationMessage {
    struct { unsigned char trialNamespace : 1; } _has;
}

@property (retain, nonatomic) SISchemaVersion *namespaceCompatabilityVersion;
@property (nonatomic) char hasNamespaceCompatabilityVersion;
@property (retain, nonatomic) SADSchemaSADTrialRollout *rollout;
@property (nonatomic) char hasRollout;
@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) int trialNamespace;
@property (nonatomic) char hasTrialNamespace;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAssets:(id)a0;
- (unsigned long long)assetsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (void)deleteAssets;
- (void)deleteNamespaceCompatabilityVersion;
- (void)deleteRollout;
- (void)deleteTrialNamespace;
- (id)suppressMessageUnderConditions;

@end
