@class NSString;

@interface _OSBatteryLowSOCPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) BOOL lowSOCPredicted;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSString *modelVersion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
