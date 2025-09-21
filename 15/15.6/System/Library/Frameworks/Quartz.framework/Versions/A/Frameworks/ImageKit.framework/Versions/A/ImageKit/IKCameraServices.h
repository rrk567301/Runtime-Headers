@class IKIrisListener, IKHardwareCapsChangeNotifier;

@interface IKCameraServices : NSObject {
    IKIrisListener *_irisListener;
    IKHardwareCapsChangeNotifier *_hardwareCapsChangeNotifier;
    int _observerCount;
}

+ (id)sharedCameraServices;

- (void)dealloc;
- (id)init;
- (void)addObserver;
- (void)removeObserver;
- (void)_logState;
- (char)cameraAttached;
- (void)cameraIsGone:(id)a0;
- (void)hardwareCapsDidChange:(id)a0;
- (char)irisClosed;
- (void)irisClosed:(id)a0;
- (void)irisOpened:(id)a0;
- (char)mirrorMode;
- (void)setMirrorMode:(char)a0;

@end
