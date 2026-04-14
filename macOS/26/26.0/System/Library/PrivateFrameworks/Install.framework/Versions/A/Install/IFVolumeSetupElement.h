@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    BOOL _willInitializeTarget;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1 willInitializeTarget:(BOOL)a2;

@end
