@class NSString, NSArray, NSDate, NSObject, NSNumber;
@protocol OS_os_log;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_currentISOCountryCode;
    NSDate *_goLiveDate;
    NSArray *_countryList;
    NSNumber *_rampPeriod;
    NSNumber *_deploymentLimit;
    NSString *_testSerialNumber;
    NSNumber *_deploymentPercent;
    NSNumber *_deploymentDay;
    NSString *_serialNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setTestSerialNumber:(id)a0;
- (id)testSerialNumber;
- (void)setDeploymentDay:(id)a0;
- (id)deploymentDay;
- (void)setDeploymentPercent:(id)a0;
- (id)deploymentPercent;
- (BOOL)isDeploymentAllowed:(id *)a0;
- (BOOL)isDeploymentAllowedPerCountryList;
- (BOOL)isDeploymentAllowedPerGoLiveDate;
- (BOOL)isDeploymentAllowedPerRampPeriod;
- (BOOL)isDeploymentAllowedPerDeploymentLimit;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (void)createSerialNumber;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;

@end
