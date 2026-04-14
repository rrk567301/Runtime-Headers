@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)entitlements;
+ (unsigned int)qualityOfService;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)dealloc;
- (void)setCurrentState;
- (void)stop;
- (void).cxx_destruct;

@end
