@class NSSet, NSTimer, NSArray, NSMutableSet;
@protocol MCProgressEntryDelegate;

@interface MCProgressEntry : NSObject <MCDiscretionaryWorkSchedulerDelegate> {
    NSMutableSet *_progresses;
    char _overrideConditions;
    char _userRequestedOverride;
    _Atomic BOOL _hasScheduledRefresh;
}

@property (nonatomic) double fractionCompleted;
@property (nonatomic) char canDeferWork;
@property (nonatomic) char suspended;
@property (nonatomic) char hasBeenSuspended;
@property (nonatomic) char overrideConditions;
@property (nonatomic) char userRequestedOverride;
@property (nonatomic) unsigned long long unsatisfiedConditions;
@property (retain, nonatomic) NSTimer *finishTimer;
@property (weak, nonatomic) id<MCProgressEntryDelegate> delegate;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;
@property (readonly, nonatomic) double finishDelay;
@property (readonly, nonatomic) char hasSignificantDeferrableWork;
@property (readonly, nonatomic) char shouldDisplay;
@property (readonly, copy, nonatomic) NSSet *observedProgressKeypaths;
@property (readonly, copy, nonatomic) NSArray *progresses;

+ (id)keyPathsForValuesAffectingReasonText;
+ (id)progressEntryWithSlice:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_finish:(id)a0;
- (void)_scheduleFinish;
- (void)_scheduleRefreshIfNeeded;
- (void)_unscheduleFinish;
- (void)addProgress:(id)a0;
- (void)discretionaryWorkSchedulerStateChanged:(id)a0;
- (id)reasonText;
- (void)refreshValues;

@end
