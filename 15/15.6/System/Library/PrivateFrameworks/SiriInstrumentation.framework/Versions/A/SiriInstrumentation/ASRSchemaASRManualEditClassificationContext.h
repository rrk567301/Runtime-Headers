@class ASRSchemaASRManualEditClassificationStarted, ASRSchemaASRManualEditClassificationFailed, SISchemaUUID, ASRSchemaASRManualEditClassificationEnded, NSData;

@interface ASRSchemaASRManualEditClassificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) char hasOriginalAsrId;
@property (retain, nonatomic) ASRSchemaASRManualEditClassificationStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ASRSchemaASRManualEditClassificationEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ASRSchemaASRManualEditClassificationFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteOriginalAsrId;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
