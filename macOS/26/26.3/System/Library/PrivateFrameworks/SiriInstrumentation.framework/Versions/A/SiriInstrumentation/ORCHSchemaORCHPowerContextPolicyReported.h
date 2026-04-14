@class ORCHSchemaORCHPowerContextPolicies, ORCHSchemaORCHVisionPowerState, NSData;

@interface ORCHSchemaORCHPowerContextPolicyReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPowerContextPolicies *powerContextPolicies;
@property (nonatomic) BOOL hasPowerContextPolicies;
@property (retain, nonatomic) ORCHSchemaORCHVisionPowerState *visionPowerState;
@property (nonatomic) BOOL hasVisionPowerState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformspecificpowerstates;

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
- (void)deletePowerContextPolicies;
- (void)deleteVisionPowerState;

@end
