@class NSString, NSData;

@interface ASRSchemaASROneBestTranscriptTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (copy, nonatomic) NSString *postItn;
@property (nonatomic) BOOL hasPostItn;
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
- (void)deletePostItn;
- (void)deleteRawRecognition;

@end
