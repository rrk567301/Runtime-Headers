@class ORCHSchemaORCHNLRouterBridgeEnded, NSData, ORCHSchemaORCHNLRouterBridgeStarted, ORCHSchemaORCHNLRouterBridgeFailed, SISchemaUUID;

@interface ORCHSchemaORCHNLRouterBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
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
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
