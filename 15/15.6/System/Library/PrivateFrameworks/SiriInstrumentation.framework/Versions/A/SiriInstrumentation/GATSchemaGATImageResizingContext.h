@class GATSchemaGATImageResizingEventFailed, GATSchemaGATImageResizingEventEnded, NSData, GATSchemaGATImageResizingEventStarted;

@interface GATSchemaGATImageResizingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GATSchemaGATImageResizingEventStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) GATSchemaGATImageResizingEventEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) GATSchemaGATImageResizingEventFailed *failed;
@property (nonatomic) char hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContentevent;

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
- (id)suppressMessageUnderConditions;

@end
