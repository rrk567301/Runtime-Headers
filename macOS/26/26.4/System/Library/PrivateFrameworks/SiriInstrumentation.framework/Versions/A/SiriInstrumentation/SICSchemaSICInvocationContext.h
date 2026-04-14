@class SICSchemaSICInvocationCancelled, SICSchemaSICInvocationStarted, NSData, SICSchemaSICInvocationEnded;

@interface SICSchemaSICInvocationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SICSchemaSICInvocationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SICSchemaSICInvocationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SICSchemaSICInvocationCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
