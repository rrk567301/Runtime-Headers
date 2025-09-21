@class NSString, NSData;

@interface ASRSchemaASROneBestTranscriptTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (copy, nonatomic) NSString *postItn;
@property (nonatomic) BOOL hasPostItn;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deletePostItn;
- (void)deleteRawRecognition;

@end
