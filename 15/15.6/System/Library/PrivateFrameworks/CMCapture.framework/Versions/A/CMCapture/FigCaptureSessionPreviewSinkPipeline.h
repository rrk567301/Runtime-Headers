@class NSString;

@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline

@property (nonatomic) char imageQueueUpdatedNotificationSent;
@property (nonatomic) char previewRunning;
@property (nonatomic) char previewSinkEnabled;
@property (retain, nonatomic) NSString *sourceID;

- (void)dealloc;

@end
