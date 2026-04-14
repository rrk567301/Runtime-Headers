@class NSArray, NSData;

@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionFeatureSets;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)actionFeatureSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionFeatureSetsCount;
- (void)addActionFeatureSets:(id)a0;
- (void)clearActionFeatureSets;
- (void)deleteActionFeatureSets;

@end
