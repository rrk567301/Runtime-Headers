@interface _GCCurrentSkylightSessionMonitor : NSObject

@property (readonly) int secureInputPid;

- (id)init;
- (void)dealloc;
- (void)_refreshSessionProperties;

@end
