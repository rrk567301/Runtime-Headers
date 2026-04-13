@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    BOOL _willInitializeTarget;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (id)logDescription;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1 willInitializeTarget:(BOOL)a2;

@end
