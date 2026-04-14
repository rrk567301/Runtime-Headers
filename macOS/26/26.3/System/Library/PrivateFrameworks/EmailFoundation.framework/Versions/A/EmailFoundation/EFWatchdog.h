@class NSString;

@interface EFWatchdog : NSObject

@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier;

- (void)invalidate;
- (void)start;
- (void).cxx_destruct;
- (id)initWithMonitoredBundleIdentifier:(id)a0;

@end
