@class IFDiskObject;

@interface IFFinalizeDiskElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    int _installKey;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (BOOL)runAfterError;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1;
- (void)_runWithManager:(id)a0;

@end
