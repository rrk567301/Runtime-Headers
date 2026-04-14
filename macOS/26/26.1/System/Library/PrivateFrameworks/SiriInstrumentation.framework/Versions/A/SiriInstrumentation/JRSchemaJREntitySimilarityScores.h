@class NSArray, NSData;

@interface JRSchemaJREntitySimilarityScores : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rows;
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
- (unsigned long long)rowCount;
- (void)writeTo:(id)a0;
- (void)addRow:(id)a0;
- (id)rowAtIndex:(unsigned long long)a0;
- (void)clearRow;
- (void)deleteRow;

@end
