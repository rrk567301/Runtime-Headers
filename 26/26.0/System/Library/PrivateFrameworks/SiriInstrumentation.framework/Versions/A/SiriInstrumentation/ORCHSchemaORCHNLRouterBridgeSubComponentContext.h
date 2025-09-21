@class ORCHSchemaORCHNLRouterBridgeSubComponentStarted, NSData, SISchemaUUID, ORCHSchemaORCHNLRouterBridgeSubComponentEnded, ORCHSchemaORCHNLRouterBridgeSubComponentFailed;

@interface ORCHSchemaORCHNLRouterBridgeSubComponentContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeSubComponentStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeSubComponentEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeSubComponentFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (void)deleteTrpId;

@end
