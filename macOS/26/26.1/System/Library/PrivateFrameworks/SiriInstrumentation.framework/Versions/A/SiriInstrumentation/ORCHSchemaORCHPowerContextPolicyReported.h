@class ORCHSchemaORCHPowerContextPolicies, ORCHSchemaORCHVisionPowerState, NSData;

@interface ORCHSchemaORCHPowerContextPolicyReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHPowerContextPolicies *powerContextPolicies;
@property (nonatomic) BOOL hasPowerContextPolicies;
@property (retain, nonatomic) ORCHSchemaORCHVisionPowerState *visionPowerState;
@property (nonatomic) BOOL hasVisionPowerState;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformspecificpowerstates;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deletePowerContextPolicies;
- (void)deleteVisionPowerState;

@end
