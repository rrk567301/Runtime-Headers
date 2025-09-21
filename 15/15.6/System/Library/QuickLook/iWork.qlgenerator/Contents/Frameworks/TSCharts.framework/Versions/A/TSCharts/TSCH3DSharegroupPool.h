@class NSString, NSCondition, TSCH3DSharegroupDelayChecker, NSMutableArray;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUiOSMemoryWarningFlushable> {
    long long _size;
    long long _numAlive;
    long long _disableLevel;
    NSMutableArray *_sharegroups;
    NSCondition *_condition;
    char _busy;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)flush;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (char)canFlushObjects;
- (char)canCreateOpenGLObjects;
- (char)canRenderForAnimations;
- (char)canRenderUsingOpenGL;
- (id)obtainSharegroup;
- (char)p_applicationStateAllowsAnimationRendering;
- (char)p_applicationStateAllowsObjectFlushing;
- (char)p_applicationStateAllowsOpenGLObjectCreation;
- (char)p_applicationStateAllowsOpenGLRendering;
- (char)p_canUseOpenGLWithCheck:(id /* block */)a0;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)a0;
- (void)p_flushSharegroupsIfPossible;
- (void)p_lockAndPerformBlock:(id /* block */)a0;
- (id)p_obtainSharegroupFromSharegroups;
- (void)p_removeSharegroupsFromFlushingManager;
- (void)releaseSharegroup:(id)a0;
- (void)scheduleCheckCondition;
- (void)waitForBackgroundThreadsWithTimeout:(double)a0;
- (void)willCheckCondition;

@end
