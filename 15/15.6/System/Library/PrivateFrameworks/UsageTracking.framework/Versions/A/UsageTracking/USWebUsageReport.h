@class NSString, NSDictionary;

@interface USWebUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *domainIdentifier;
@property (readonly) char webUsageTrusted;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)a0 webUsageTrusted:(char)a1 totalUsageTime:(double)a2 webUsageByDomain:(id)a3;
- (id)initWithDomainIdentifier:(id)a0 totalUsageTime:(double)a1 webUsageByDomain:(id)a2;
- (id)initWithDomainIdentifier:(id)a0 webUsageTrusted:(char)a1 totalUsageTime:(double)a2 webUsageByDomain:(id)a3;

@end
