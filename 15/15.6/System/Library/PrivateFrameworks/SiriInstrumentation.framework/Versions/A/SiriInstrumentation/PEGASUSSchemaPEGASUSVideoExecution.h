@class NSData, PEGASUSSchemaPEGASUSVideoInteraction, PEGASUSSchemaPEGASUSVideoExperienceProperty;

@interface PEGASUSSchemaPEGASUSVideoExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoInteraction *videoInteraction;
@property (nonatomic) char hasVideoInteraction;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExperienceProperty *videoExperienceProperty;
@property (nonatomic) char hasVideoExperienceProperty;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteVideoExperienceProperty;
- (void)deleteVideoInteraction;
- (id)suppressMessageUnderConditions;

@end
