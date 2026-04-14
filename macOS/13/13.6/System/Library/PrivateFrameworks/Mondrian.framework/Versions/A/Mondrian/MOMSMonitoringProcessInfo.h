@interface MOMSMonitoringProcessInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double cpuUsagePercentage;
@property unsigned long long memoryResidentBytes;
@property unsigned long long memoryAnonymousBytes;
@property unsigned long long memoryPurgeableBytes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
