@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline

@property (nonatomic) BOOL imageQueueUpdatedNotificationSent;
@property (nonatomic) BOOL previewRunning;
@property (nonatomic) BOOL previewSinkEnabled;
@property (nonatomic) BOOL providesBuffersForPreviewTap;

@end
