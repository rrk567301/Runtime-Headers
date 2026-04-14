@class NSArray, NSData;

@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretations;
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
- (void)addInterpretations:(id)a0;
- (void)clearInterpretations;
- (void)deleteInterpretations;
- (id)interpretationsAtIndex:(unsigned long long)a0;
- (unsigned long long)interpretationsCount;

@end
