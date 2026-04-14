@class NSString, NSData;

@interface ASRSchemaASROneBestTranscriptTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (copy, nonatomic) NSString *postItn;
@property (nonatomic) BOOL hasPostItn;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deletePostItn;
- (void)deleteRawRecognition;

@end
