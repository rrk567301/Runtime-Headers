@class UVCDeviceControl;

@interface UVCExtensionAppleStream : UVCExtensionStream {
    UVCDeviceControl *_keyFrameRateControl;
}

- (void).cxx_destruct;
- (void)addProcessingStateObserver:(id)a0;
- (BOOL)setActiveFrameDuration:(id)a0;
- (void)observeValueForKeyPathSync:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
