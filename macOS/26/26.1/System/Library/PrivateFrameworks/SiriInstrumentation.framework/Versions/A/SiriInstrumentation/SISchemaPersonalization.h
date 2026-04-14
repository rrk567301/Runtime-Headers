@class NSData, SISchemaVoiceSettings;

@interface SISchemaPersonalization : SISchemaInstrumentationMessage {
    struct { unsigned char personalDomainsSetup : 1; unsigned char appleMusicSubscriber : 1; } _has;
}

@property (nonatomic) BOOL personalDomainsSetup;
@property (nonatomic) BOOL hasPersonalDomainsSetup;
@property (nonatomic) BOOL appleMusicSubscriber;
@property (nonatomic) BOOL hasAppleMusicSubscriber;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
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
- (void)deleteAppleMusicSubscriber;
- (void)deletePersonalDomainsSetup;
- (void)deleteVoiceSettings;

@end
