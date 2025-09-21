@class NSData, PEGASUSSchemaPEGASUSVideoInteraction, PEGASUSSchemaPEGASUSVideoExperienceProperty;

@interface PEGASUSSchemaPEGASUSVideoExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoInteraction *videoInteraction;
@property (nonatomic) BOOL hasVideoInteraction;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSVideoExperienceProperty *videoExperienceProperty;
@property (nonatomic) BOOL hasVideoExperienceProperty;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteVideoExperienceProperty;
- (void)deleteVideoInteraction;

@end
