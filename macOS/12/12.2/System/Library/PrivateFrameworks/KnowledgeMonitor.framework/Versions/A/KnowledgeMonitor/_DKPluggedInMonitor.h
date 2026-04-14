@interface _DKPluggedInMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)entitlements;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentState;

@end
