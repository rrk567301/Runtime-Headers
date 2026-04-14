@class NSArray, NSData;

@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionFeatureSets;
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
- (id)actionFeatureSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionFeatureSetsCount;
- (void)addActionFeatureSets:(id)a0;
- (void)clearActionFeatureSets;
- (void)deleteActionFeatureSets;

@end
