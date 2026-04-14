@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)eventStream;
+ (unsigned int)qualityOfService;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void).cxx_destruct;
- (void)setCurrentState;
- (void)start;
- (void)dealloc;

@end
