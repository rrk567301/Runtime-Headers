@class NSArray, NSData;

@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearInterpretationIndices;
- (void)addInterpretationIndices:(unsigned int)a0;
- (void)deleteInterpretationIndices;
- (unsigned long long)interpretationIndicesCount;
- (unsigned int)interpretationIndicesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
