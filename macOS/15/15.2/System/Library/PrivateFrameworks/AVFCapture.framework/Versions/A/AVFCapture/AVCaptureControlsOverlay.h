@class AVWeakReference;

@interface AVCaptureControlsOverlay : NSObject {
    AVWeakReference *_sessionReference;
}

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (id)initWithSession:(id)a0;
- (void)rebuildControls;
- (void)updateControls:(id)a0;
- (void)_sendControlsIsolated;
- (void)_updateControlIsolated:(id)a0;
- (void)updateControl:(id)a0;

@end
