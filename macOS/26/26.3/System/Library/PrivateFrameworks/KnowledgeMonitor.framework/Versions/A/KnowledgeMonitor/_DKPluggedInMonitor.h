@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (unsigned int)qualityOfService;
+ (id)entitlements;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deactivate;
- (void)setCurrentState;

@end
