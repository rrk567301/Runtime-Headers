@class ORCHSchemaORCHSubRequestFailed, ORCHSchemaORCHSubRequestStarted, NSData, SISchemaUUID, ORCHSchemaORCHSubRequestEnded;

@interface ORCHSchemaORCHSubRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) ORCHSchemaORCHSubRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHSubRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHSubRequestEnded *ended;
@property (nonatomic) char hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSubrequestevent;

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
- (void)deleteSubRequestId;
- (id)suppressMessageUnderConditions;

@end
