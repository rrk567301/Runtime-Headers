@class AVCaptureDeviceDiscoverySession;

@interface AVControlCenterCaptureDeviceWatcher : NSObject {
    AVCaptureDeviceDiscoverySession *_discoverySession;
    id /* block */ _handler;
    char _centerStageSupported;
    char _backgroundBlurSupported;
    char _studioLightingSupported;
    char _reactionEffectsSupported;
    char _backgroundReplacementSupported;
}

@property (readonly) char centerStageSupported;
@property (readonly) char backgroundBlurSupported;
@property (readonly) char studioLightingSupported;
@property (readonly) char reactionEffectsSupported;
@property (readonly) char backgroundReplacementSupported;
@property (readonly) char micModesSupported;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSupportedVideoEffectsDidChangeHandler:(id /* block */)a0;

@end
