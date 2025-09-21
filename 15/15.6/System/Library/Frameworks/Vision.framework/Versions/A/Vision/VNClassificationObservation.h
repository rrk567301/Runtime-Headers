@class VisionCoreClassificationMetrics, NSString, VNOperationPointsProvider;

@interface VNClassificationObservation : VNObservation {
    VNOperationPointsProvider *_historicallyEncodedOperationPointsProvider;
}

@property (readonly, copy, nonatomic) VisionCoreClassificationMetrics *classificationMetrics;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasMinimumPrecision:(float)a0 forRecall:(float)a1;
- (char)hasMinimumRecall:(float)a0 forPrecision:(float)a1;
- (char)hasPrecisionRecallCurve;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithOriginatingRequestSpecifier:(id)a0 identifier:(id)a1 confidence:(float)a2 classificationMetrics:(id)a3;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2;
- (id)initWithRequestRevision:(unsigned long long)a0 identifier:(id)a1 confidence:(float)a2 classificationMetrics:(id)a3;
- (id)vn_cloneObject;

@end
