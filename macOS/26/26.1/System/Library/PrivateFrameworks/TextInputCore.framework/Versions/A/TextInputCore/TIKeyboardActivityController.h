@class NSString, NSTimer, NSHashTable, NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate, TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses> {
    BOOL _hadRecentActivity;
    BOOL _hasBackgroundActivity;
    unsigned long long _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
}

@property (nonatomic) BOOL isDirty;
@property (retain, nonatomic) NSObject<OS_os_transaction> *isDirtyTransaction;
@property (retain, nonatomic) NSTimer *inactivityTimer;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) unsigned long long activityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singletonInstance;
+ (void)setSharedController:(id)a0;
+ (double)defaultKeyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (double)keyboardIdleTimeoutInterval;
+ (id)sharedController;

- (void)removeActivityObserver:(id)a0;
- (void)notifyTransitionWithContext:(id)a0;
- (void)setKeyboardCleanIfNecessary;
- (BOOL)atexitHandler;
- (void)updateActivityState;
- (BOOL)shouldBecomeDirty;
- (void)backgroundActivityAssertionsDidChange;
- (void)touchInactivityTimer;
- (BOOL)canGoEarlyClean;
- (void)dealloc;
- (void)inactivityTimerFired:(id)a0;
- (void).cxx_destruct;
- (id)createMemoryPressureSource;
- (void)addActivityObserver:(id)a0;
- (BOOL)shouldBecomeClean;
- (void)keyboardAssertionsDidChange;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)generateMemgraphsIfNeeded;
- (void)releaseInputManagers;
- (id)init;

@end
