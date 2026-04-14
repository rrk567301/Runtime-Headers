@interface CBProxFilter : CBFilter {
    float _proxReleaseTime;
    BOOL _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
    BOOL _triggered;
}

@property (nonatomic) BOOL isActive;

- (id)filterEvent:(id)a0;
- (id)handleProximityEvent:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (id)handleALSEvent:(id)a0;
- (void)setTriggered:(BOOL)a0;
- (void)dealloc;

@end
