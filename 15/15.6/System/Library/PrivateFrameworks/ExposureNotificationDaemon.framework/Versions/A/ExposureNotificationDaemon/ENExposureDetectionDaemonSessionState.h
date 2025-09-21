@class NSString, NSDictionary, NSDate, ENRegion;

@interface ENExposureDetectionDaemonSessionState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *clientSigningIdentity;
@property (copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSDate *infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
@property (copy, nonatomic) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
