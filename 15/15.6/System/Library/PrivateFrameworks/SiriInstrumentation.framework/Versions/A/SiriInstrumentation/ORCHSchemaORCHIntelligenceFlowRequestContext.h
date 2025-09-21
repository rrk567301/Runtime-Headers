@class ORCHSchemaORCHIntelligenceFlowRequestEnded, NSData, ORCHSchemaORCHIntelligenceFlowRequestFailed, ORCHSchemaORCHIntelligenceFlowRequestStarted, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) char hasTraceId;
@property (retain, nonatomic) ORCHSchemaORCHIntelligenceFlowRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHIntelligenceFlowRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHIntelligenceFlowRequestEnded *ended;
@property (nonatomic) char hasEnded;
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
- (void)deleteStartedOrChanged;
- (void)deleteSubRequestId;
- (void)deleteTraceId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
