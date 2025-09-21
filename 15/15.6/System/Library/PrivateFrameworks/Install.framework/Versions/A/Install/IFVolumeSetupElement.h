@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    char _willInitializeTarget;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1 willInitializeTarget:(char)a2;

@end
