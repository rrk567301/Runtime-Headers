@class IFInstallPlan, IFDiskObject;

@interface IFWriteReceiptElement : IFTaskElement {
    IFDiskObject *_targetVolume;
    IFInstallPlan *_installPlan;
    BOOL _creatingFinal;
    BOOL _elementIsRunningInSessionQueueContext;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (id)logDescription;
- (id)initWithTargetVolume:(id)a0 installKey:(int)a1 stateDelegate:(id)a2 packageController:(id)a3 creatingFinal:(BOOL)a4;
- (id)initWithTargetVolume:(id)a0 installKey:(int)a1 stateDelegate:(id)a2 packageController:(id)a3;
- (BOOL)_runnerCreateReceiptDirectoriesAt:(id)a0;

@end
