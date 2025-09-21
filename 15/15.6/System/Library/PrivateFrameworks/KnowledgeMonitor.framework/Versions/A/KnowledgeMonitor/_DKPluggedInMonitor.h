@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) char enabled;
@property (nonatomic) int pluggedInToken;

+ (id)entitlements;
+ (unsigned int)qualityOfService;
+ (id)eventStream;
+ (void)setIsPluggedIn:(char)a0;
+ (id)_BMEventWithState:(char)a0 adapterType:(long long)a1 isWireless:(char)a2;
+ (id)_eventWithState:(char)a0 adapterType:(long long)a1 isWireless:(char)a2;
+ (char)shouldMergeUnchangedEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentState;

@end
