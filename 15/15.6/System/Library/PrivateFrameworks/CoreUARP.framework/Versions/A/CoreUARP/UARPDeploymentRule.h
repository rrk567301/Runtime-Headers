@class NSString, NSArray, NSMutableDictionary, NSDate, NSNumber, NSObject;
@protocol OS_os_log;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_testSerialNumber;
    NSNumber *_deploymentPercent;
    NSNumber *_deploymentDay;
    NSString *_serialNumber;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *currentISOCountryCode;
@property (copy) NSDate *goLiveDate;
@property (copy) NSArray *countryList;
@property (copy) NSNumber *rampPeriod;
@property (copy) NSNumber *deploymentLimit;
@property (copy) NSMutableDictionary *deploymentLimits;
@property char isFullyDeployedDeploymentLimits;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)addDeploymentLimit:(id)a0 withGoLiveDate:(id)a1 error:(id *)a2;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (void)createSerialNumber;
- (id)deploymentDay;
- (id)deploymentPercent;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (char)isDeploymentAllowed:(id *)a0;
- (char)isDeploymentAllowedPerCountryList;
- (char)isDeploymentAllowedPerDeploymentLimit;
- (char)isDeploymentAllowedPerGoLiveDate;
- (char)isDeploymentAllowedPerRampPeriod;
- (void)setDeploymentDay:(id)a0;
- (void)setDeploymentPercent:(id)a0;
- (void)setTestSerialNumber:(id)a0;
- (id)testSerialNumber;
- (char)validateDeploymentLimits:(id *)a0;

@end
