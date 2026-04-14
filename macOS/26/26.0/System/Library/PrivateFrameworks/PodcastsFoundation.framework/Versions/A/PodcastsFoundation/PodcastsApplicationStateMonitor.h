@interface PodcastsApplicationStateMonitor : NSObject {
    void /* unknown type, empty encoding */ applicationState;
    void /* unknown type, empty encoding */ listenerTask;
}

@property (class, nonatomic, readonly) PodcastsApplicationStateMonitor *shared;

+ (id)descriptionForState:(unsigned long long)a0;

- (unsigned long long)currentState;
- (BOOL)isUnknown;
- (void)updateCurrentState:(unsigned long long)a0;
- (BOOL)isActive;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isBackground;

@end
