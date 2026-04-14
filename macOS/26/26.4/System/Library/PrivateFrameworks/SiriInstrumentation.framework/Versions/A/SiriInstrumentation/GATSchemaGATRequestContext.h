@class GATSchemaGATRequestEnded, GATSchemaGATRequestStarted, GATSchemaGATRequestHandoff, NSData, GATSchemaGATRequestFailed, GATSchemaGATRequestCanceled;

@interface GATSchemaGATRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GATSchemaGATRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) GATSchemaGATRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) GATSchemaGATRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) GATSchemaGATRequestCanceled *canceled;
@property (nonatomic) BOOL hasCanceled;
@property (retain, nonatomic) GATSchemaGATRequestHandoff *handoff;
@property (nonatomic) BOOL hasHandoff;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCanceled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHandoff;
- (void)deleteStartedOrChanged;

@end
