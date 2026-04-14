@interface _OSChargingPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic) BOOL meetsSystemConfidenceThreshold;
@property (nonatomic) double chargingDuration;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
