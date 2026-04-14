@class FLSchemaFLInteractionDonationEnded, SISchemaUUID, FLSchemaFLInteractionDonationStarted, NSData;

@interface FLSchemaFLInteractionDonationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLSchemaFLInteractionDonationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) FLSchemaFLInteractionDonationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
