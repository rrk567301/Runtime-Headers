@class NLRouterSchemaNLRouterSubComponentSetupStarted, NLRouterSchemaNLRouterSubComponentSetupFailed, NLRouterSchemaNLRouterSubComponentSetupEnded, NSData, SISchemaUUID;

@interface NLRouterSchemaNLRouterSubComponentSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentSetupStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentSetupEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentSetupFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;

@end
