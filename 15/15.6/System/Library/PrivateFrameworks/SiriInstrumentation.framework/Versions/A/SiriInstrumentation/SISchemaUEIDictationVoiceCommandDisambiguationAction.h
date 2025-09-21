@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandDisambiguationAction : SISchemaInstrumentationMessage {
    struct { unsigned char disambiguationType : 1; unsigned char disambiguationIndex : 1; unsigned char totalDisambiguationAlternatives : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) char hasVoiceCommandId;
@property (nonatomic) int disambiguationType;
@property (nonatomic) char hasDisambiguationType;
@property (nonatomic) unsigned int disambiguationIndex;
@property (nonatomic) char hasDisambiguationIndex;
@property (nonatomic) unsigned int totalDisambiguationAlternatives;
@property (nonatomic) char hasTotalDisambiguationAlternatives;
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
- (void)deleteDisambiguationIndex;
- (void)deleteDisambiguationType;
- (void)deleteTotalDisambiguationAlternatives;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
