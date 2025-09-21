@class NSData, SISchemaVoiceSettings;

@interface SISchemaPersonalization : SISchemaInstrumentationMessage {
    struct { unsigned char personalDomainsSetup : 1; unsigned char appleMusicSubscriber : 1; } _has;
}

@property (nonatomic) char personalDomainsSetup;
@property (nonatomic) char hasPersonalDomainsSetup;
@property (nonatomic) char appleMusicSubscriber;
@property (nonatomic) char hasAppleMusicSubscriber;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) char hasVoiceSettings;
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
- (void)deleteAppleMusicSubscriber;
- (void)deletePersonalDomainsSetup;
- (void)deleteVoiceSettings;
- (id)suppressMessageUnderConditions;

@end
