@class NSString;

@interface MXVoiceTriggerInfo : PBCodable <NSCopying> {
    struct { unsigned char extraSamplesAtStart : 1; unsigned char hardwareSampleRate : 1; unsigned char recognizerScore : 1; unsigned char recognizerThresholdOffset : 1; unsigned char satScore : 1; unsigned char satThreshold : 1; unsigned char triggerEnd : 1; unsigned char triggerScore : 1; unsigned char triggerThreshold : 1; } _has;
}

@property (nonatomic) char hasTriggerScore;
@property (nonatomic) double triggerScore;
@property (nonatomic) char hasTriggerThreshold;
@property (nonatomic) double triggerThreshold;
@property (nonatomic) char hasSatScore;
@property (nonatomic) double satScore;
@property (nonatomic) char hasSatThreshold;
@property (nonatomic) double satThreshold;
@property (nonatomic) char hasRecognizerScore;
@property (nonatomic) double recognizerScore;
@property (nonatomic) char hasRecognizerThresholdOffset;
@property (nonatomic) double recognizerThresholdOffset;
@property (readonly, nonatomic) char hasConfigVersion;
@property (retain, nonatomic) NSString *configVersion;
@property (nonatomic) char hasHardwareSampleRate;
@property (nonatomic) double hardwareSampleRate;
@property (nonatomic) char hasExtraSamplesAtStart;
@property (nonatomic) double extraSamplesAtStart;
@property (nonatomic) char hasTriggerEnd;
@property (nonatomic) double triggerEnd;

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
