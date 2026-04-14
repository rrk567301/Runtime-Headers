@class ORCHSchemaORCHExecuteOnRemoteRequestEnded, ORCHSchemaORCHExecuteOnRemoteRequestFailed, ORCHSchemaORCHExecuteOnRemoteRequestStarted, SISchemaUUID, NSData;

@interface ORCHSchemaORCHExecuteOnRemoteRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCommandevent;

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

@end
