@class NSString;

@interface MIPPlaybackInfo : PBCodable <NSCopying> {
    struct { unsigned char durationInSamples : 1; unsigned char gaplessEncodingDrainCode : 1; unsigned char gaplessFrameResyncCode : 1; unsigned char gaplessHeuristicCode : 1; unsigned char gaplessHeuristicDelayCode : 1; unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char volumeNormalizationEnergy : 1; unsigned char beatsPerMinute : 1; unsigned char bitRate : 1; unsigned char codecSubType : 1; unsigned char codecType : 1; unsigned char dataKind : 1; unsigned char progressionDirection : 1; unsigned char relativeVolume : 1; unsigned char sampleRate : 1; } _has;
}

@property (nonatomic) char hasBitRate;
@property (nonatomic) int bitRate;
@property (nonatomic) char hasCodecType;
@property (nonatomic) int codecType;
@property (nonatomic) char hasCodecSubType;
@property (nonatomic) int codecSubType;
@property (nonatomic) char hasDataKind;
@property (nonatomic) int dataKind;
@property (readonly, nonatomic) char hasDataUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (readonly, nonatomic) char hasEqPreset;
@property (retain, nonatomic) NSString *eqPreset;
@property (readonly, nonatomic) char hasPlaybackFormat;
@property (retain, nonatomic) NSString *playbackFormat;
@property (nonatomic) char hasGaplessHeuristicCode;
@property (nonatomic) long long gaplessHeuristicCode;
@property (nonatomic) char hasGaplessHeuristicDelayCode;
@property (nonatomic) long long gaplessHeuristicDelayCode;
@property (nonatomic) char hasGaplessEncodingDrainCode;
@property (nonatomic) long long gaplessEncodingDrainCode;
@property (nonatomic) char hasGaplessFrameResyncCode;
@property (nonatomic) long long gaplessFrameResyncCode;
@property (nonatomic) char hasRelativeVolume;
@property (nonatomic) int relativeVolume;
@property (nonatomic) char hasSampleRate;
@property (nonatomic) int sampleRate;
@property (nonatomic) char hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) char hasStopTime;
@property (nonatomic) long long stopTime;
@property (nonatomic) char hasVolumeNormalizationEnergy;
@property (nonatomic) long long volumeNormalizationEnergy;
@property (nonatomic) char hasBeatsPerMinute;
@property (nonatomic) int beatsPerMinute;
@property (nonatomic) char hasProgressionDirection;
@property (nonatomic) int progressionDirection;
@property (nonatomic) char hasDurationInSamples;
@property (nonatomic) long long durationInSamples;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
