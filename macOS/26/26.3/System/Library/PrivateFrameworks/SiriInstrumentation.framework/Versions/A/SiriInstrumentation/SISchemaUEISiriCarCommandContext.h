@class SISchemaUEISiriCarCommandFailed, SISchemaUEISiriCarCommandStarted, SISchemaUEISiriCarCommandCancelled, NSData, SISchemaUEISiriCarCommandEnded;

@interface SISchemaUEISiriCarCommandContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEISiriCarCommandStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SISchemaUEISiriCarCommandEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SISchemaUEISiriCarCommandFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUEISiriCarCommandCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
