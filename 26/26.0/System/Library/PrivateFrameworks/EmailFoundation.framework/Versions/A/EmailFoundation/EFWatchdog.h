@class NSString;

@interface EFWatchdog : NSObject

@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier;

- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithMonitoredBundleIdentifier:(id)a0;

@end
