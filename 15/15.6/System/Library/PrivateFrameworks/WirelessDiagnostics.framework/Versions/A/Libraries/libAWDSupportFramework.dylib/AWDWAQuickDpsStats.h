@interface AWDWAQuickDpsStats : PBCodable <NSCopying> {
    struct { unsigned char quickDpsTimeSincePreviousTriggerMinutes : 1; unsigned char awdlActivityThreshold : 1; unsigned char ccaThreshold : 1; unsigned char probabilityThreshold : 1; unsigned char rssiThreshold : 1; unsigned char screenOffThreshold : 1; unsigned char screenOnThreshold : 1; unsigned char stallProbability : 1; unsigned char suppressedReason : 1; unsigned char isDpsValidationDisabled : 1; unsigned char quickDpsResetRecommendation : 1; unsigned char screenStateOn : 1; unsigned char stallPrediction : 1; } _has;
}

@property (nonatomic) char hasScreenStateOn;
@property (nonatomic) char screenStateOn;
@property (nonatomic) char hasQuickDpsResetRecommendation;
@property (nonatomic) char quickDpsResetRecommendation;
@property (nonatomic) char hasStallPrediction;
@property (nonatomic) char stallPrediction;
@property (nonatomic) char hasStallProbability;
@property (nonatomic) unsigned int stallProbability;
@property (nonatomic) char hasProbabilityThreshold;
@property (nonatomic) unsigned int probabilityThreshold;
@property (nonatomic) char hasCcaThreshold;
@property (nonatomic) unsigned int ccaThreshold;
@property (nonatomic) char hasRssiThreshold;
@property (nonatomic) unsigned int rssiThreshold;
@property (nonatomic) char hasScreenOnThreshold;
@property (nonatomic) unsigned int screenOnThreshold;
@property (nonatomic) char hasScreenOffThreshold;
@property (nonatomic) unsigned int screenOffThreshold;
@property (nonatomic) char hasSuppressedReason;
@property (nonatomic) int suppressedReason;
@property (nonatomic) char hasIsDpsValidationDisabled;
@property (nonatomic) char isDpsValidationDisabled;
@property (nonatomic) char hasAwdlActivityThreshold;
@property (nonatomic) unsigned int awdlActivityThreshold;
@property (nonatomic) char hasQuickDpsTimeSincePreviousTriggerMinutes;
@property (nonatomic) unsigned long long quickDpsTimeSincePreviousTriggerMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSuppressedReason:(id)a0;
- (id)suppressedReasonAsString:(int)a0;

@end
