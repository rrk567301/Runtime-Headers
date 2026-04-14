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
- (void)deletePlannerQueryId;
- (void)deleteSubRequestId;
- (void)deleteTraceId;
- (void)deleteTrpId;

@end
