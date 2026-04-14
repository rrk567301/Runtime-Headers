@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)eventStream;
+ (unsigned int)qualityOfService;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentState;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)deactivate;
- (void)dealloc;

@end
