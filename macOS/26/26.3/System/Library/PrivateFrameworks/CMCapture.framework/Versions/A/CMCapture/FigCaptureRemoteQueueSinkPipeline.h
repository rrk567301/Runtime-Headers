@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline

@property (readonly, nonatomic) BWRemoteQueueSinkNode *sinkNode;

- (void)updateClientAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)dealloc;
- (void)setSinkNode:(id)a0;

@end
