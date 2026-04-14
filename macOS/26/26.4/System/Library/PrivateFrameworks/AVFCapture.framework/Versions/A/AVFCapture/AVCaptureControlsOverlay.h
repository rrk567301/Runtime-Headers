@class AVWeakReference;

@interface AVCaptureControlsOverlay : NSObject {
    AVWeakReference *_sessionReference;
}

+ (void)initialize;

- (id)initWithSession:(id)a0;
- (void)activate;
- (void)invalidate;
- (void)dealloc;
- (void)rebuildControls;
- (void)updateControls:(id)a0;
- (void)_sendControlsIsolated;
- (void)_updateControlIsolated:(id)a0;
- (void)updateControl:(id)a0;

@end
