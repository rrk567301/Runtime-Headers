@class NSArray, NSData;

@interface ORCHSchemaORCHAssetSetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *uafAssetSets;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addUafAssetSets:(id)a0;
- (void)clearUafAssetSets;
- (void)deleteUafAssetSets;
- (id)uafAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSetsCount;

@end
