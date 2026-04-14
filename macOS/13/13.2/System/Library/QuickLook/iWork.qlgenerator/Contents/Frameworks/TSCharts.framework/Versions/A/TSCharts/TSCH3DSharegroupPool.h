@class NSString, NSCondition, TSCH3DSharegroupDelayChecker, NSMutableArray;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable> {
    long long _size;
    long long _numAlive;
    long long _disableLevel;
    NSMutableArray *_sharegroups;
    NSCondition *_condition;
    BOOL _busy;
    TSCH3DSharegroupDelayChecker *_checker;
    unsigned long long _applicationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)flush;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)scheduleCheckCondition;
- (void)willCheckCondition;
- (void)p_lockAndPerformBlock:(id /* block */)a0;
- (BOOL)p_applicationStateAllowsAnimationRendering;
- (BOOL)p_applicationStateAllowsOpenGLRendering;
- (BOOL)p_applicationStateAllowsOpenGLObjectCreation;
- (BOOL)p_applicationStateAllowsObjectFlushing;
- (void)p_removeSharegroupsFromFlushingManager;
- (void)p_flushSharegroupsIfPossible;
- (id)p_obtainSharegroupFromSharegroups;
- (id)obtainSharegroup;
- (void)releaseSharegroup:(id)a0;
- (BOOL)p_canUseOpenGLWithCheck:(id /* block */)a0;
- (BOOL)canRenderForAnimations;
- (BOOL)canCreateOpenGLObjects;
- (BOOL)canRenderUsingOpenGL;
- (BOOL)canFlushObjects;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)a0;
- (void)waitForBackgroundThreadsWithTimeout:(double)a0;

@end
