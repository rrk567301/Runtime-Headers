@class GATSchemaGATRequestEnded, GATSchemaGATRequestStarted, GATSchemaGATRequestHandoff, NSData, GATSchemaGATRequestFailed, GATSchemaGATRequestCanceled;

@interface GATSchemaGATRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GATSchemaGATRequestStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) GATSchemaGATRequestEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) GATSchemaGATRequestFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) GATSchemaGATRequestCanceled *canceled;
@property (nonatomic) char hasCanceled;
@property (retain, nonatomic) GATSchemaGATRequestHandoff *handoff;
@property (nonatomic) char hasHandoff;
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
- (void)deleteCanceled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHandoff;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
