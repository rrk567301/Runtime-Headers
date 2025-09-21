@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying> {
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    char _beepBeforeInstruction;
    char _muteSpeechOverride;
    char _pauseSpokenAudio;
    char _shouldUseGuidanceEventManager;
    char _speechEnabled;
    struct { unsigned char has_distanceUnits : 1; unsigned char has_maxAlternateRouteCount : 1; unsigned char has_voiceVolume : 1; unsigned char has_userPreferredTransportType : 1; unsigned char has_beepBeforeInstruction : 1; unsigned char has_muteSpeechOverride : 1; unsigned char has_pauseSpokenAudio : 1; unsigned char has_shouldUseGuidanceEventManager : 1; unsigned char has_speechEnabled : 1; } _flags;
}

@property (nonatomic) char hasVoiceVolume;
@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) char hasDistanceUnits;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) char hasPauseSpokenAudio;
@property (nonatomic) char pauseSpokenAudio;
@property (nonatomic) char hasMuteSpeechOverride;
@property (nonatomic) char muteSpeechOverride;
@property (nonatomic) char hasSpeechEnabled;
@property (nonatomic) char speechEnabled;
@property (nonatomic) char hasMaxAlternateRouteCount;
@property (nonatomic) unsigned long long maxAlternateRouteCount;
@property (nonatomic) char hasBeepBeforeInstruction;
@property (nonatomic) char beepBeforeInstruction;
@property (readonly, nonatomic) char hasVoiceLanguage;
@property (retain, nonatomic) NSString *voiceLanguage;
@property (nonatomic) char hasShouldUseGuidanceEventManager;
@property (nonatomic) char shouldUseGuidanceEventManager;
@property (nonatomic) char hasUserPreferredTransportType;
@property (nonatomic) int userPreferredTransportType;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsUserPreferredTransportType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)userPreferredTransportTypeAsString:(int)a0;

@end
