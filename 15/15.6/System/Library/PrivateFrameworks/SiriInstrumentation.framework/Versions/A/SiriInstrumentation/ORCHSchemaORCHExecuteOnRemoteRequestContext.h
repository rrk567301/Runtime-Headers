@class ORCHSchemaORCHExecuteOnRemoteRequestEnded, ORCHSchemaORCHExecuteOnRemoteRequestFailed, ORCHSchemaORCHExecuteOnRemoteRequestStarted, SISchemaUUID, NSData;

@interface ORCHSchemaORCHExecuteOnRemoteRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHExecuteOnRemoteRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichCommandevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
