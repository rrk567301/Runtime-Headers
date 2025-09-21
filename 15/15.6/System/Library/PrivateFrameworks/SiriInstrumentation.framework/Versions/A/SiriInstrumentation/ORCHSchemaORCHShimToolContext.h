@class NSData, ORCHSchemaORCHShimToolEnded, SISchemaUUID, ORCHSchemaORCHShimToolFailed, ORCHSchemaORCHShimToolStarted;

@interface ORCHSchemaORCHShimToolContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) char hasClientTraceId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) ORCHSchemaORCHShimToolStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHShimToolFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHShimToolEnded *ended;
@property (nonatomic) char hasEnded;
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
- (void)deleteClientTraceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteSubRequestId;
- (id)suppressMessageUnderConditions;

@end
