@class NSData;

@interface ASVSchemaASVOutputVolumeQueried : SISchemaInstrumentationMessage {
    struct { unsigned char outputVolume : 1; unsigned char speakerDistance : 1; unsigned char speakerSpeechLevel : 1; unsigned char musicLoudnessLevel : 1; unsigned char backgroundNoiseLevel : 1; unsigned char backgroundNoiseActivityLevel : 1; unsigned char isMediaPlaybackOn : 1; unsigned char invocationType : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) float outputVolume;
@property (nonatomic) BOOL hasOutputVolume;
@property (nonatomic) int speakerDistance;
@property (nonatomic) BOOL hasSpeakerDistance;
@property (nonatomic) float speakerSpeechLevel;
@property (nonatomic) BOOL hasSpeakerSpeechLevel;
@property (nonatomic) float musicLoudnessLevel;
@property (nonatomic) BOOL hasMusicLoudnessLevel;
@property (nonatomic) float backgroundNoiseLevel;
@property (nonatomic) BOOL hasBackgroundNoiseLevel;
@property (nonatomic) int backgroundNoiseActivityLevel;
@property (nonatomic) BOOL hasBackgroundNoiseActivityLevel;
@property (nonatomic) BOOL isMediaPlaybackOn;
@property (nonatomic) BOOL hasIsMediaPlaybackOn;
@property (nonatomic) int invocationType;
@property (nonatomic) BOOL hasInvocationType;
@property (nonatomic) BOOL isPermanentOffsetEnabled;
@property (nonatomic) BOOL hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) BOOL hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteBackgroundNoiseActivityLevel;
- (void)deleteBackgroundNoiseLevel;
- (void)deleteInvocationType;
- (void)deleteIsMediaPlaybackOn;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deleteMusicLoudnessLevel;
- (void)deleteOutputVolume;
- (void)deletePermanentOffsetFactor;
- (void)deleteSpeakerDistance;
- (void)deleteSpeakerSpeechLevel;

@end
