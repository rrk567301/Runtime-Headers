@class NSString, NSArray, NSMutableDictionary, NSDate, NSNumber, NSObject;
@protocol OS_os_log;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSString *_testSerialNumber;
    NSNumber *_deploymentPercent;
    NSNumber *_deploymentDay;
    NSString *_serialNumber;
    NSString *_minOSVersion;
    NSString *_maxOSVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *currentISOCountryCode;
@property (copy) NSDate *goLiveDate;
@property (copy) NSArray *countryList;
@property (copy) NSNumber *rampPeriod;
@property (copy) NSNumber *deploymentLimit;
@property (copy) NSMutableDictionary *deploymentLimits;
@property BOOL isFullyDeployedDeploymentLimits;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compareOSVersion:(id)a0 withVersion:(id)a1;
- (void)addDeploymentLimit:(id)a0 withGoLiveDate:(id)a1 error:(id *)a2;
- (void)calculateDeploymentDay;
- (void)calculateDeploymentPercent;
- (void)createSerialNumber;
- (id)deploymentDay;
- (id)deploymentPercent;
- (id)initWithMinOSVersion:(id)a0 maxOSVersion:(id)a1;
- (BOOL)isDeploymentAllowed:(id *)a0;
- (BOOL)isDeploymentAllowedPerCountryList;
- (BOOL)isDeploymentAllowedPerDeploymentLimit;
- (BOOL)isDeploymentAllowedPerGoLiveDate;
- (BOOL)isDeploymentAllowedPerRampPeriod;
- (void)setDeploymentDay:(id)a0;
- (void)setDeploymentPercent:(id)a0;
- (void)setTestSerialNumber:(id)a0;
- (id)testSerialNumber;
- (BOOL)validateDeploymentLimits:(id *)a0;

@end
