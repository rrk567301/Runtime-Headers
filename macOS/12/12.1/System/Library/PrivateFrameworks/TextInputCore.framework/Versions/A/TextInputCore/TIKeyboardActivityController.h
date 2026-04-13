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

+ (id)sharedController;
+ (id)singletonInstance;
+ (double)keyboardIdleTimeoutInterval;
+ (double)defaultKeyboardIdleTimeoutInterval;
+ (void)setSharedController:(id)a0;
+ (void)setKeyboardIdleTimeoutInterval:(double)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)inactivityTimerFired:(id)a0;
- (void)releaseInputManagers;
- (void)addActivityObserver:(id)a0;
- (void)removeActivityObserver:(id)a0;
- (void)keyboardAssertionsDidChange;
- (void)backgroundActivityAssertionsDidChange;
- (void)notifyTransitionWithContext:(id)a0;
- (void)notifyMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (id)createMemoryPressureSource;
- (void)handleMemoryStatusPressure:(unsigned long long)a0;
- (unsigned long long)getExcessMemoryInBytes;
- (void)updateActivityState;
- (BOOL)atexitHandler;
- (void)touchInactivityTimer;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)a0;
- (BOOL)shouldBecomeDirty;
- (void)setKeyboardCleanIfNecessary;
- (BOOL)canGoEarlyClean;
- (BOOL)shouldBecomeClean;

@end
