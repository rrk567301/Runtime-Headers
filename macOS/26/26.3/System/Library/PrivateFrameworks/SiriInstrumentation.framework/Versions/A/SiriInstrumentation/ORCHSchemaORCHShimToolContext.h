@class NSData, ORCHSchemaORCHShimToolEnded, SISchemaUUID, ORCHSchemaORCHShimToolFailed, ORCHSchemaORCHShimToolStarted;

@interface ORCHSchemaORCHShimToolContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) ORCHSchemaORCHShimToolStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHShimToolFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHShimToolEnded *ended;
@property (nonatomic) BOOL hasEnded;
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
- (void)deleteClientTraceId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteSubRequestId;

@end
