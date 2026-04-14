@class NSString;

@interface EFWatchdog : NSObject

@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier;

- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (id)initWithMonitoredBundleIdentifier:(id)a0;

@end
