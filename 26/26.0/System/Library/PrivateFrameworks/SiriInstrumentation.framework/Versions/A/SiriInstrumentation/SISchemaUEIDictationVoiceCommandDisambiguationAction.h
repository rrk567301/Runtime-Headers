@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandDisambiguationAction : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationType : 1; unsigned char disambiguationIndex : 1; unsigned char totalDisambiguationAlternatives : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) int disambiguationType;
@property (nonatomic) BOOL hasDisambiguationType;
@property (nonatomic) unsigned int disambiguationIndex;
@property (nonatomic) BOOL hasDisambiguationIndex;
@property (nonatomic) unsigned int totalDisambiguationAlternatives;
@property (nonatomic) BOOL hasTotalDisambiguationAlternatives;
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
- (void)deleteDisambiguationIndex;
- (void)deleteDisambiguationType;
- (void)deleteTotalDisambiguationAlternatives;
- (void)deleteVoiceCommandId;

@end
