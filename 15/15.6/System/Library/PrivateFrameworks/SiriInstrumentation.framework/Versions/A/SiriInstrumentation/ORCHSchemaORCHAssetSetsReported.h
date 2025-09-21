@class NSArray, NSData;

@interface ORCHSchemaORCHAssetSetsReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *uafAssetSets;
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
- (void)addUafAssetSets:(id)a0;
- (void)clearUafAssetSets;
- (void)deleteUafAssetSets;
- (id)suppressMessageUnderConditions;
- (id)uafAssetSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)uafAssetSetsCount;

@end
