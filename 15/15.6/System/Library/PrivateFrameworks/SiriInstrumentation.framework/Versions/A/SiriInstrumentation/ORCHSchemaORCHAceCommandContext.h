@class ORCHSchemaORCHAceCommandStarted, ORCHSchemaORCHAceCommandEnded, NSData, SISchemaUUID, ORCHSchemaORCHAceCommandFailed;

@interface ORCHSchemaORCHAceCommandContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *aceId;
@property (nonatomic) char hasAceId;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandFailed *failed;
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
- (void)deleteAceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
