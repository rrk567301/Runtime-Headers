@class ORCHSchemaORCHPowerContextPolicies, ORCHSchemaORCHVisionPowerState, NSData;

@interface ORCHSchemaORCHPowerContextPolicyReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPowerContextPolicies *powerContextPolicies;
@property (nonatomic) char hasPowerContextPolicies;
@property (retain, nonatomic) ORCHSchemaORCHVisionPowerState *visionPowerState;
@property (nonatomic) char hasVisionPowerState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformspecificpowerstates;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePowerContextPolicies;
- (void)deleteVisionPowerState;
- (id)suppressMessageUnderConditions;

@end
