@protocol FigCaptureSessionPreviewTapDelegate;

@interface FigCaptureSessionProxy : NSObject {
    struct OpaqueFigCaptureSession { } *_session;
    long long _identifier;
    BOOL _containsVideoSource;
    struct { unsigned int val[8]; } _clientAuditToken;
    BOOL _previewTapOpened;
    id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;
}

@property (readonly) long long identifier;
@property (readonly) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly) BOOL containsVideoSource;

+ (void)initialize;

- (void)dealloc;
- (void)closePreviewTap;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0 identifier:(long long)a1 clientAuditToken:(struct { unsigned int x0[8]; })a2 containsVideoSource:(BOOL)a3;
- (int)openPreviewTapWithDelegate:(id)a0;

@end
