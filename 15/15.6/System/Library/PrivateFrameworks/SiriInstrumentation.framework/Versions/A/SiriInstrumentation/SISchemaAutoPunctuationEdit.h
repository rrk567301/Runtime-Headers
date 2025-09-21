@class NSString, NSData;

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedPunctuation;
@property (nonatomic) char hasRecognizedPunctuation;
@property (copy, nonatomic) NSString *correctedPunctuation;
@property (nonatomic) char hasCorrectedPunctuation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCorrectedPunctuation;
- (void)deleteRecognizedPunctuation;
- (id)suppressMessageUnderConditions;

@end
