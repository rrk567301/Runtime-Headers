@class NSError, NSNumber, NSDictionary;

@interface MIBUDeviceStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long operation;
@property (retain, nonatomic) NSError *operationError;
@property (retain, nonatomic) NSNumber *batteryLevel;
@property (retain, nonatomic) NSDictionary *operationDetails;
@property (retain, nonatomic) NSDictionary *thermalDetails;
@property (retain, nonatomic) NSDictionary *batteryDetails;
@property (retain, nonatomic) NSDictionary *updateSummary;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
