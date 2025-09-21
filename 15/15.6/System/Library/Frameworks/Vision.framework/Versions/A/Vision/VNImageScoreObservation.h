@class NSNumber;

@interface VNImageScoreObservation : VNObservation

@property (retain, nonatomic) NSNumber *blurScore;
@property (retain, nonatomic) NSNumber *exposureScore;

+ (char)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)vn_cloneObject;

@end
