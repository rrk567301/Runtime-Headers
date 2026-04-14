@class AVWeakReference;

@interface AVCaptureControlsOverlay : NSObject {
    AVWeakReference *_sessionReference;
}

+ (void)initialize;

- (id)initWithSession:(id)a0;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (void)updateControls:(id)a0;
- (void)rebuildControls;
- (void)_sendControlsIsolated;
- (void)_updateControlIsolated:(id)a0;
- (void)updateControl:(id)a0;

@end
