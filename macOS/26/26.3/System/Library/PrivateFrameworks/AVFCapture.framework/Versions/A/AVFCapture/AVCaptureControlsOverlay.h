@class AVWeakReference;

@interface AVCaptureControlsOverlay : NSObject {
    AVWeakReference *_sessionReference;
}

+ (void)initialize;

- (void)invalidate;
- (id)initWithSession:(id)a0;
- (void)dealloc;
- (void)activate;
- (void)rebuildControls;
- (void)updateControls:(id)a0;
- (void)_sendControlsIsolated;
- (void)_updateControlIsolated:(id)a0;
- (void)updateControl:(id)a0;

@end
