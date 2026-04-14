@interface PodcastsApplicationStateMonitor : NSObject {
    void /* unknown type, empty encoding */ applicationState;
    void /* unknown type, empty encoding */ listenerTask;
}

@property (class, nonatomic, readonly) PodcastsApplicationStateMonitor *shared;

+ (id)descriptionForState:(unsigned long long)a0;

- (unsigned long long)currentState;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isUnknown;
- (void)updateCurrentState:(unsigned long long)a0;
- (BOOL)isBackground;

@end
