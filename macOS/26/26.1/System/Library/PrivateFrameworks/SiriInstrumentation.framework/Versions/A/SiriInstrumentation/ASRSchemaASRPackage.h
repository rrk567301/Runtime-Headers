@class ASRSchemaASRRecognitionResult, NSData;

@interface ASRSchemaASRPackage : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRRecognitionResult *rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (retain, nonatomic) ASRSchemaASRRecognitionResult *postItn;
@property (nonatomic) BOOL hasPostItn;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deletePostItn;
- (void)deleteRawRecognition;

@end
