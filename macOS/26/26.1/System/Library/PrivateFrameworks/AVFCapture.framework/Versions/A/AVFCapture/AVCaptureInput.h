@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

+ (void)initialize;

- (struct OpaqueCMClock { } *)clock;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)session;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setSession:(id)a0;
- (void)updateSupportedProperties;
- (void)dealloc;
- (id)videoDevice;
- (id)initSubclass;

@end
