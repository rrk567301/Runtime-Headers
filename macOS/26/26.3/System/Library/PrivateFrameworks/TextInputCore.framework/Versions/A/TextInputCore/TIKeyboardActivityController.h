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
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;
+ (double)defaultKeyboardIdleTimeoutInterval;
+ (double)keyboardIdleTimeoutInterval;
+ (id)sharedController;
+ (void)setSharedController:(id)a0;

- (void)setKeyboardCleanIfNecessary;
- (void)notifyTransitionWithContext:(id)a0;
- (void)addActivityObserver:(id)a0;
- (id)createMemoryPressureSource;
- (BOOL)shouldBecomeClean;
- (void)keyboardAssertionsDidChange;
- (id)init;
- (void)inactivityTimerFired:(id)a0;
- (void)touchInactivityTimer;
- (void)releaseInputManagers;
- (void).cxx_destruct;
- (void)generateMemgraphsIfNeeded;
- (void)dealloc;
- (void)backgroundActivityAssertionsDidChange;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (BOOL)atexitHandler;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (BOOL)canGoEarlyClean;
- (void)updateActivityState;
- (BOOL)shouldBecomeDirty;
- (void)removeActivityObserver:(id)a0;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;

@end
