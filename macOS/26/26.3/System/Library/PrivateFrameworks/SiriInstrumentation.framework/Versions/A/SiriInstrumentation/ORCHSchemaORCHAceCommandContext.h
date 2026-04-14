@class ORCHSchemaORCHAceCommandStarted, ORCHSchemaORCHAceCommandEnded, NSData, SISchemaUUID, ORCHSchemaORCHAceCommandFailed;

@interface ORCHSchemaORCHAceCommandContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *aceId;
@property (nonatomic) BOOL hasAceId;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandFailed *failed;
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
- (void)deleteAceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
