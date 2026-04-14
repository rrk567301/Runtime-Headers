@class ORCHSchemaORCHUIActivationEnded, SISchemaUUID, ORCHSchemaORCHUIActivationStarted, NSData;

@interface ORCHSchemaORCHUIActivationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHUIActivationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHUIActivationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;

@end
