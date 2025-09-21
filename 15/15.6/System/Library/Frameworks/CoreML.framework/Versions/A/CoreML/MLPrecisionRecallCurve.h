@class NSArray;

@interface MLPrecisionRecallCurve : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *precisionValues;
@property (readonly, nonatomic) NSArray *precisionConfidenceThresholds;
@property (readonly, nonatomic) NSArray *recallValues;
@property (readonly, nonatomic) NSArray *recallConfidenceThresholds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrecisionValues:(id)a0 precisionConfidenceThresholds:(id)a1 recallValues:(id)a2 recallConfidenceThresholds:(id)a3;

@end
