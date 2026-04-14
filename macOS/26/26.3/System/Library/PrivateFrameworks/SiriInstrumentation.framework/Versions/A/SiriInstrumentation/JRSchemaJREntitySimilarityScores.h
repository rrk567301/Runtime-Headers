@class NSArray, NSData;

@interface JRSchemaJREntitySimilarityScores : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)rowCount;
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
- (void)addRow:(id)a0;
- (id)rowAtIndex:(unsigned long long)a0;
- (void)clearRow;
- (void)deleteRow;

@end
