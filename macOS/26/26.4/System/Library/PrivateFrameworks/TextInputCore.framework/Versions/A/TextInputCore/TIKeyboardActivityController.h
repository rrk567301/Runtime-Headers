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

+ (void)setSharedController:(id)a0;
+ (id)singletonInstance;
+ (id)sharedController;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (double)keyboardIdleTimeoutInterval;
+ (double)defaultKeyboardIdleTimeoutInterval;

- (BOOL)shouldBecomeDirty;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (void)updateActivityState;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (void)generateMemgraphsIfNeeded;
- (void).cxx_destruct;
- (BOOL)atexitHandler;
- (void)setKeyboardCleanIfNecessary;
- (void)touchInactivityTimer;
- (id)init;
- (void)notifyTransitionWithContext:(id)a0;
- (BOOL)shouldBecomeClean;
- (void)releaseInputManagers;
- (void)inactivityTimerFired:(id)a0;
- (BOOL)canGoEarlyClean;
- (void)backgroundActivityAssertionsDidChange;
- (id)createMemoryPressureSource;
- (void)keyboardAssertionsDidChange;
- (void)addActivityObserver:(id)a0;
- (void)dealloc;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)removeActivityObserver:(id)a0;

@end
