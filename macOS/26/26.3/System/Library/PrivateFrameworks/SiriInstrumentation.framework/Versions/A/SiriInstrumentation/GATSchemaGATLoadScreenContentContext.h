@class GATSchemaGATLoadScreenContentEventFailed, GATSchemaGATLoadScreenContentEventStarted, GATSchemaGATLoadScreenContentEventEnded, NSData;

@interface GATSchemaGATLoadScreenContentContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GATSchemaGATLoadScreenContentEventStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) GATSchemaGATLoadScreenContentEventEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) GATSchemaGATLoadScreenContentEventFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContentevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
