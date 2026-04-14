@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowQuerySent : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *plannerQueryId;
@property (nonatomic) BOOL hasPlannerQueryId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
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
- (void)deletePlannerQueryId;
- (void)deleteSubRequestId;
- (void)deleteTraceId;
- (void)deleteTrpId;

@end
