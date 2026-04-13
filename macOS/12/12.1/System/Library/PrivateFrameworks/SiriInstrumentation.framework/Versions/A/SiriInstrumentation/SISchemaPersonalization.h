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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
