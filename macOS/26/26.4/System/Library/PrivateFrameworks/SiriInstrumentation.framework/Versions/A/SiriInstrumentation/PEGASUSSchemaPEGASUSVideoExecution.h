@class NSData, PEGASUSSchemaPEGASUSVideoInteraction, PEGASUSSchemaPEGASUSVideoExperienceProperty;

@interface PEGASUSSchemaPEGASUSVideoExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoInteraction *videoInteraction;
@property (nonatomic) BOOL hasVideoInteraction;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExperienceProperty *videoExperienceProperty;
@property (nonatomic) BOOL hasVideoExperienceProperty;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteVideoExperienceProperty;
- (void)deleteVideoInteraction;

@end
