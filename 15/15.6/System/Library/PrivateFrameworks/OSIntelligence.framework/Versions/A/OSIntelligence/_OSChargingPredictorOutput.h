@interface _OSChargingPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic) char meetsSystemConfidenceThreshold;
@property (nonatomic) double chargingDuration;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
