@class TSCH3DSharegroupDelayChecker, TSCH3DGPUSharegroup;

@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent> {
    TSCH3DSharegroupDelayChecker *_checker;
    TSCH3DGPUSharegroup *_sharegroup;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)willCheckCondition;
- (void)releaseSharegroup:(id)a0;
- (void)didRemoveAllInterests;
- (void)flushTokenSharegroup;
- (id)tokenSharegroup;
- (void)deleteTokenSharegroup;

@end
