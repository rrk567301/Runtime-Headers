@class NSString;

@interface MXVoiceTriggerInfo : PBCodable <NSCopying> {
    struct { unsigned char extraSamplesAtStart : 1; unsigned char hardwareSampleRate : 1; unsigned char recognizerScore : 1; unsigned char recognizerThresholdOffset : 1; unsigned char satScore : 1; unsigned char satThreshold : 1; unsigned char triggerEnd : 1; unsigned char triggerScore : 1; unsigned char triggerThreshold : 1; } _has;
}

@property (nonatomic) BOOL hasTriggerScore;
@property (nonatomic) double triggerScore;
@property (nonatomic) BOOL hasTriggerThreshold;
@property (nonatomic) double triggerThreshold;
@property (nonatomic) BOOL hasSatScore;
@property (nonatomic) double satScore;
@property (nonatomic) BOOL hasSatThreshold;
@property (nonatomic) double satThreshold;
@property (nonatomic) BOOL hasRecognizerScore;
@property (nonatomic) double recognizerScore;
@property (nonatomic) BOOL hasRecognizerThresholdOffset;
@property (nonatomic) double recognizerThresholdOffset;
@property (readonly, nonatomic) BOOL hasConfigVersion;
@property (retain, nonatomic) NSString *configVersion;
@property (nonatomic) BOOL hasHardwareSampleRate;
@property (nonatomic) double hardwareSampleRate;
@property (nonatomic) BOOL hasExtraSamplesAtStart;
@property (nonatomic) double extraSamplesAtStart;
@property (nonatomic) BOOL hasTriggerEnd;
@property (nonatomic) double triggerEnd;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
