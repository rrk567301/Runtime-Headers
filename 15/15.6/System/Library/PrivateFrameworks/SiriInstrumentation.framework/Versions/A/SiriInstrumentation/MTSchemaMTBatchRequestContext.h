@class MTSchemaMTBatchRequestStarted, MTSchemaMTBatchRequestEnded, MTSchemaMTBatchRequestFailed, SISchemaUUID, MTSchemaMTBatchRequestCancelled, NSData;

@interface MTSchemaMTBatchRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
@property (retain, nonatomic) MTSchemaMTBatchRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) MTSchemaMTBatchRequestEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) MTSchemaMTBatchRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) MTSchemaMTBatchRequestCancelled *cancelled;
@property (nonatomic) char hasCancelled;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
