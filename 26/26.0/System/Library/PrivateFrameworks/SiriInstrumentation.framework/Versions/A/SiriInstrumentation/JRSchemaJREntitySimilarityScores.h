@class NSArray, NSData;

@interface JRSchemaJREntitySimilarityScores : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (unsigned long long)rowCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (id)rowAtIndex:(unsigned long long)a0;
- (void)clearRow;
- (void)deleteRow;

@end
