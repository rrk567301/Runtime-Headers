@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (BOOL)shouldMergeUnchangedEvents;
+ (unsigned int)qualityOfService;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (void)setCurrentState;
- (void)deactivate;
- (void).cxx_destruct;

@end
