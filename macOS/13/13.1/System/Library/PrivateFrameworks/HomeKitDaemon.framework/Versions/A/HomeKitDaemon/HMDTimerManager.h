@class HMFTimer, NSMutableArray, NSString;
@protocol HMDTimerManagerDelegate, HMDTimerManagerDataSource;

@interface HMDTimerManager : NSObject <HMFTimerDelegate, HMDTimerManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *sortedTimerContexts;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) id<HMDTimerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDTimerManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)timerDidFire:(id)a0;
- (id)startTimerWithTimeInterval:(double)a0 object:(id)a1;
- (void)cancelTimerForContext:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 dataSource:(id)a1;
- (void)_evaluateTimers;

@end
