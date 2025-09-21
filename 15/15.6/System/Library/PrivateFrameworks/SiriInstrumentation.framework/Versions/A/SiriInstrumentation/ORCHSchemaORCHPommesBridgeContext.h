@class NSData, ORCHSchemaORCHPommesRequestStarted, ORCHSchemaORCHPommesRequestFailed, ORCHSchemaORCHPommesRequestEnded, ORCHSchemaORCHPommesRequestUnableToHandle, SISchemaUUID;

@interface ORCHSchemaORCHPommesBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPommesRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) ORCHSchemaORCHPommesRequestUnableToHandle *cancelled;
@property (nonatomic) char hasCancelled;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
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
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteSubRequestId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
