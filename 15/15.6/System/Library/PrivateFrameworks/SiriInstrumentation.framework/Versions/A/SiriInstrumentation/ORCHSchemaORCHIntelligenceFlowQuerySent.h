@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowQuerySent : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *plannerQueryId;
@property (nonatomic) char hasPlannerQueryId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) char hasTraceId;
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
- (void)deletePlannerQueryId;
- (void)deleteSubRequestId;
- (void)deleteTraceId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
