@class VisionCoreValueConfidenceCurve;

@interface VisionCoreClassificationMetrics : NSObject <NSCopying, NSSecureCoding> {
    VisionCoreValueConfidenceCurve *_precisionCurve;
    VisionCoreValueConfidenceCurve *_recallCurve;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)confidenceThresholdForPrecision:(float)a0;
- (float)confidenceThresholdForRecall:(float)a0;
- (id)initWithPrecisionCurve:(id)a0 recallCurve:(id)a1;
- (float)precisionOfConfidence:(float)a0;
- (float)recallOfConfidence:(float)a0;

@end
