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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (void)deleteTrpId;

@end
