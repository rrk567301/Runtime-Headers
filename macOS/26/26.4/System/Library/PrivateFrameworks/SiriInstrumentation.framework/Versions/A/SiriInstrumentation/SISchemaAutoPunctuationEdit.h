@class NSString, NSData;

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *recognizedPunctuation;
@property (nonatomic) BOOL hasRecognizedPunctuation;
@property (copy, nonatomic) NSString *correctedPunctuation;
@property (nonatomic) BOOL hasCorrectedPunctuation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCorrectedPunctuation;
- (void)deleteRecognizedPunctuation;

@end
