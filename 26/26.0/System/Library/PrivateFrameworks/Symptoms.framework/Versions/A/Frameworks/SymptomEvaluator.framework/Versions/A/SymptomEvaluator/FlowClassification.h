@interface FlowClassification : NSObject {
    unsigned long long _condensedValues;
}

@property (nonatomic) unsigned int disposition;
@property (nonatomic) unsigned int latency;
@property (nonatomic) unsigned int jitter;
@property (nonatomic) unsigned int lossTolerance;
@property (nonatomic) unsigned int burstiness;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int requiredBandwidth;
@property (nonatomic) unsigned int preferredBandwidth;
@property (nonatomic) BOOL automatedExpiration;
@property (nonatomic) double expirationTime;
@property (retain, nonatomic) FlowClassification *nextClassification;
@property (readonly, nonatomic) unsigned int duration;

+ (unsigned int)lossToleranceFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (unsigned int)dispositionFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (unsigned int)desiredBandwidthsizeFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (id)undefinedInstance;
+ (id)propertyFlagsToString:(unsigned int)a0;
+ (id)defaultInstance;
+ (unsigned int)requiredBandwidthsizeFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (unsigned int)jitterFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (id)classificationWithDictionary:(id)a0;
+ (unsigned int)latencyFromDigest:(struct FlowClassificationDigest { unsigned long long x0; } *)a0;
+ (id)classFlagsToString:(unsigned int)a0;

- (BOOL)configure:(id)a0;
- (BOOL)setOnExpiry:(id)a0;
- (id)dictionaryForm;
- (id)description;
- (void).cxx_destruct;

@end
