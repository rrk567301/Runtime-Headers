@class NSString, VolumeManager;

@interface SoftwareVolumeManager : NSObject <SoftwareVolumeDelegate> {
    VolumeManager *_volumeManager;
    void *_activeKnobController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct error_code { int x0; struct error_category *x1; })setVolume:(unsigned int)a0 decibelVolume:(float)a1 scalarVolume:(float)a2;
- (struct error_code { int x0; struct error_category *x1; })setMuted:(unsigned int)a0 value:(BOOL)a1;
- (struct error_code { int x0; struct error_category *x1; })setStereoPan:(unsigned int)a0 value:(float)a1;
- (struct error_code { int x0; struct error_category *x1; })setFade:(unsigned int)a0 targetScaleFactor:(float)a1 duration:(struct duration<long long, std::ratio<1, 1000>> { long long x0; })a2;
- (id)initWithVolumeManager:(id)a0;
- (void)installVolumeCallbacksOnGraph:(void *)a0;
- (struct error_code { int x0; struct error_category *x1; })graphActivated:(void *)a0;

@end
