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
- (BOOL)irisClosed;
- (BOOL)mirrorMode;
- (void)setMirrorMode:(BOOL)a0;
- (void)_logState;
- (BOOL)cameraAttached;
- (void)irisOpened:(id)a0;
- (void)irisClosed:(id)a0;
- (void)cameraIsGone:(id)a0;
- (void)hardwareCapsDidChange:(id)a0;

@end
