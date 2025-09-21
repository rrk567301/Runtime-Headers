@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

+ (void)initialize;

- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)dealloc;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)updateSupportedProperties;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)session;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setSession:(id)a0;
- (id)videoDevice;
- (id)initSubclass;

@end
