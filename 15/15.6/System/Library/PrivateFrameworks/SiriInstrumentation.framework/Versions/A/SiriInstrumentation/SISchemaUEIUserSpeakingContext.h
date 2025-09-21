@class SISchemaUEIUserSpeakingStarted, NSData, SISchemaUUID, SISchemaUEIUserSpeakingEnded;

@interface SISchemaUEIUserSpeakingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIUserSpeakingStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) SISchemaUEIUserSpeakingEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
