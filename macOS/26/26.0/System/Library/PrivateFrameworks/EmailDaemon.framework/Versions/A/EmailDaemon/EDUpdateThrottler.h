@class EFDebouncer, NSString, NSMutableArray, NSDate, NSObject, EFLocked;
@protocol OS_os_log, EDResumable, EFScheduler;

@interface EDUpdateThrottler : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updatesLock;
    NSMutableArray *_unacknowledgedUpdates;
}

@property (class, readonly, nonatomic) EFLocked *instances;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double delayInterval;
@property (readonly, nonatomic) long long scalingFactor;
@property (nonatomic) BOOL hasChangesSinceLastUpdate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) NSDate *lastAcknowledgementDate;
@property (nonatomic) long long updateCounter;
@property (retain, nonatomic) id<EDResumable> resumable;
@property (retain, nonatomic) EFDebouncer *resumeClientDebouncer;
@property (retain, nonatomic) id<EFScheduler> resumeClientScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerInstance:(id)a0;
+ (void)resetAllInstances;

- (id)initWithName:(id)a0 delayInterval:(double)a1 resumable:(id)a2;
- (void)_reset;
- (void)dealloc;
- (id)initWithName:(id)a0 delayInterval:(double)a1 scalingFactor:(long long)a2;
- (id)initWithDelayInterval:(double)a0 scalingFactor:(long long)a1;
- (unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double *)a0;
- (void).cxx_destruct;
- (id)updateWithBlock:(id /* block */)a0 unacknowledgedUpdatesCount:(unsigned long long *)a1;

@end
