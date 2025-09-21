@protocol HMMRadarInitiating;

@interface HMDThreadMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } counterLock;
    unsigned long long currentCount;
    unsigned long long threshold;
    BOOL ttrEnabled;
}

@property (readonly, nonatomic) void /* function */ *previousHook;
@property (readonly, weak, nonatomic) id<HMMRadarInitiating> radarInitiator;

+ (id)sharedInstance;
+ (id)logCategory;
+ (void)start;
+ (id)createWithRadarInitiator:(id)a0;

- (BOOL)setup;
- (void).cxx_destruct;
- (void)pthreadHookWithEvent:(unsigned int)a0;
- (void)resetWithRadarInitiator:(id)a0;

@end
