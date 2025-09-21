@class NSData;

@interface MHSchemaMHAdaptiveSiriVolumeTTSVolumeQueried : SISchemaInstrumentationMessage {
    struct { unsigned char ttsVolume : 1; unsigned char speakerDistance : 1; unsigned char speakerSpeechLevel : 1; unsigned char musicLoudnessLevel : 1; unsigned char backgroundNoiseLevel : 1; unsigned char backgroundNoiseActivityLevel : 1; unsigned char isMediaPlaybackOn : 1; unsigned char invocationType : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) float ttsVolume;
@property (nonatomic) char hasTtsVolume;
@property (nonatomic) int speakerDistance;
@property (nonatomic) char hasSpeakerDistance;
@property (nonatomic) float speakerSpeechLevel;
@property (nonatomic) char hasSpeakerSpeechLevel;
@property (nonatomic) float musicLoudnessLevel;
@property (nonatomic) char hasMusicLoudnessLevel;
@property (nonatomic) float backgroundNoiseLevel;
@property (nonatomic) char hasBackgroundNoiseLevel;
@property (nonatomic) int backgroundNoiseActivityLevel;
@property (nonatomic) char hasBackgroundNoiseActivityLevel;
@property (nonatomic) char isMediaPlaybackOn;
@property (nonatomic) char hasIsMediaPlaybackOn;
@property (nonatomic) int invocationType;
@property (nonatomic) char hasInvocationType;
@property (nonatomic) char isPermanentOffsetEnabled;
@property (nonatomic) char hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) char hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTtsVolume;
- (void)deleteBackgroundNoiseActivityLevel;
- (void)deleteBackgroundNoiseLevel;
- (void)deleteInvocationType;
- (void)deleteIsMediaPlaybackOn;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deleteMusicLoudnessLevel;
- (void)deletePermanentOffsetFactor;
- (void)deleteSpeakerDistance;
- (void)deleteSpeakerSpeechLevel;
- (id)suppressMessageUnderConditions;

@end
