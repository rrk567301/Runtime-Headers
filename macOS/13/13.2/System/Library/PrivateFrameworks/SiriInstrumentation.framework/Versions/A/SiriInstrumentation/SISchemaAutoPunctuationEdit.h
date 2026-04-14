@class NSString, NSData;

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedPunctuation;
@property (nonatomic) BOOL hasRecognizedPunctuation;
@property (copy, nonatomic) NSString *correctedPunctuation;
@property (nonatomic) BOOL hasCorrectedPunctuation;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteRecognizedPunctuation;
- (void)deleteCorrectedPunctuation;

@end
