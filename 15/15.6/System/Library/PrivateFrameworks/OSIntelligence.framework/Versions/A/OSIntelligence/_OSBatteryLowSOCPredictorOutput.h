@class NSString;

@interface _OSBatteryLowSOCPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) char lowSOCPredicted;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSString *modelVersion;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
