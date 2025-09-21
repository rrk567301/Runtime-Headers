@class NSString, NSData;

@interface ASRSchemaASROneBestTranscriptTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *rawRecognition;
@property (nonatomic) char hasRawRecognition;
@property (copy, nonatomic) NSString *postItn;
@property (nonatomic) char hasPostItn;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePostItn;
- (void)deleteRawRecognition;
- (id)suppressMessageUnderConditions;

@end
