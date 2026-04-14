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
- (void)irisOpened:(id)a0;
- (void)irisClosed:(id)a0;
- (void)cameraIsGone:(id)a0;
- (BOOL)irisClosed;
- (BOOL)mirrorMode;
- (void)setMirrorMode:(BOOL)a0;
- (BOOL)cameraAttached;
- (void)_logState;
- (void)hardwareCapsDidChange:(id)a0;

@end
