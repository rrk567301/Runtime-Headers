@interface CBProxFilter : CBFilter {
    float _proxReleaseTime;
    BOOL _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
    BOOL _triggered;
}

@property (nonatomic) BOOL isActive;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)handleALSEvent:(id)a0;
- (id)filterEvent:(id)a0;
- (id)handleProximityEvent:(id)a0;
- (void)dealloc;
- (void)setTriggered:(BOOL)a0;
- (id)init;

@end
