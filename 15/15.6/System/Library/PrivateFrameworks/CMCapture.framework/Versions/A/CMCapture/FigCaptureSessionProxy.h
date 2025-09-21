@protocol FigCaptureSessionPreviewTapDelegate;

@interface FigCaptureSessionProxy : NSObject {
    struct OpaqueFigCaptureSession { } *_session;
    long long _identifier;
    struct { unsigned int val[8]; } _clientAuditToken;
    char _containsVideoSource;
    char _containsStillImageSink;
    char _containsMovieFileSink;
    char _previewTapOpened;
    id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;
}

@property (readonly) long long identifier;
@property (readonly) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly) char containsVideoSource;
@property (readonly) char containsStillImageSink;
@property (readonly) char containsMovieFileSink;

+ (void)initialize;

- (void)dealloc;
- (void)closePreviewTap;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0 identifier:(long long)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 containsVideoSource:(char)a3 containsStillImageSink:(char)a4 containsMovieFileSink:(char)a5;
- (int)openPreviewTapWithDelegate:(id)a0;

@end
