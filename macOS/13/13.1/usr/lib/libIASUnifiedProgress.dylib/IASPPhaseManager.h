@class IASPPhase, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IASPPhaseManager : NSObject {
    IASPPhase *_currentPhase;
}

@property (retain) NSObject<OS_dispatch_semaphore> *phasesSemaphore;
@property (retain) NSMutableArray *phases;
@property float prevPhaseProgress;
@property float totalCompletedProgress;

+ (id)sharedPhaseManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float)currentProgress;
- (id)currentPhase;
- (void)addPhase:(id)a0;
- (void)clearPhases;
- (void)_waitForPhasesSemaphore;
- (void)_signalPhasesSemaphore;
- (id)_registryCurrentPhaseName;
- (id)_registryPhases;
- (void)_advanceToNextPhase;
- (void)_advanceToPhaseNamed:(id)a0;
- (void)_clearPhases;
- (id)_exportablePhases;
- (unsigned long long)_indexOfPhaseWithName:(id)a0;
- (BOOL)_setDoneForPhaseWithName:(id)a0;
- (float)_setProgress:(float)a0 forPhaseWithName:(id)a1;
- (float)_totalPercentage;
- (float)_totalPercentageThroughPhaseNamed:(id)a0;
- (void)advanceToNextPhase;
- (void)advanceToPhaseNamed:(id)a0;
- (BOOL)hasPhases;
- (void)loadPhases;
- (void)logPhases;
- (BOOL)setDoneForPhaseWithName:(id)a0;
- (float)setProgress:(float)a0 forPhaseWithName:(id)a1;

@end
