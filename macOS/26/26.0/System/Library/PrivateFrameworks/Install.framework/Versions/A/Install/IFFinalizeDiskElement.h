@class IFDiskObject;

@interface IFFinalizeDiskElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    int _installKey;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (void)_runWithManager:(id)a0;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1;
- (BOOL)runAfterError;

@end
