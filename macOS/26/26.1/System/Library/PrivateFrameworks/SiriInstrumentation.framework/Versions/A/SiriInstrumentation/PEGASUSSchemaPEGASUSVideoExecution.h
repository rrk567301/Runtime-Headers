@class NSData, PEGASUSSchemaPEGASUSVideoInteraction, PEGASUSSchemaPEGASUSVideoExperienceProperty;

@interface PEGASUSSchemaPEGASUSVideoExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoInteraction *videoInteraction;
@property (nonatomic) BOOL hasVideoInteraction;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExperienceProperty *videoExperienceProperty;
@property (nonatomic) BOOL hasVideoExperienceProperty;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteVideoExperienceProperty;
- (void)deleteVideoInteraction;

@end
