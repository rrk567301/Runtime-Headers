@interface MOMSMonitoringSystemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double cpuUsagePercentage;
@property unsigned long long physicalMemoryFreeBytes;
@property unsigned long long physicalMemoryUsedBytes;
@property unsigned long long virtualMemoryBytes;
@property unsigned long long virtualMemoryPageInBytes;
@property unsigned long long virtualMemoryPageOutBytes;
@property unsigned long long virtualMemoryCompressedBytes;
@property unsigned long long virtualMemorySwapUsedBytes;
@property unsigned long long diskBytesReadPerInterval;
@property unsigned long long diskBytesWritePerInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
