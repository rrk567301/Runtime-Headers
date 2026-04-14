@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    BOOL _willInitializeTarget;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1 willInitializeTarget:(BOOL)a2;

@end
