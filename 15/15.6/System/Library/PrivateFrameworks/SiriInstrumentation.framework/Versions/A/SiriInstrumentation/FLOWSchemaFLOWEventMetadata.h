@class NSString, SISchemaVersion, SISchemaUUID, NSData;

@interface FLOWSchemaFLOWEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) char hasTaskId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) char hasResultCandidateId;
@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) char hasVersion;
@property (retain, nonatomic) SISchemaUUID *flowId;
@property (nonatomic) char hasFlowId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFlowId;
- (void)deleteResultCandidateId;
- (void)deleteSubRequestId;
- (void)deleteTaskId;
- (void)deleteTrpId;
- (void)deleteVersion;
- (id)suppressMessageUnderConditions;

@end
