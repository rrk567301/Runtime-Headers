@class NSArray, NSData;

@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretations;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addInterpretations:(id)a0;
- (void)clearInterpretations;
- (unsigned long long)interpretationsCount;
- (id)interpretationsAtIndex:(unsigned long long)a0;

@end
