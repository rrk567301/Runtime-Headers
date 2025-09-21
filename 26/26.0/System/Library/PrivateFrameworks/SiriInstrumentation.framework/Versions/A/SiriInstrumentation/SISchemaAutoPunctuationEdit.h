@class NSString, NSData;

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedPunctuation;
@property (nonatomic) BOOL hasRecognizedPunctuation;
@property (copy, nonatomic) NSString *correctedPunctuation;
@property (nonatomic) BOOL hasCorrectedPunctuation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCorrectedPunctuation;
- (void)deleteRecognizedPunctuation;

@end
