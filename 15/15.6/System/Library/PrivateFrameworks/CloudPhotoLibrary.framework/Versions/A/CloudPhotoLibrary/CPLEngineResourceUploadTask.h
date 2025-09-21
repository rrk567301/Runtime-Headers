@class CPLResource;
@protocol CPLEngineTransportTask;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask

@property (retain, nonatomic) CPLResource *cloudResource;
@property (nonatomic, getter=isBackgroundTask) char backgroundTask;
@property (retain, nonatomic) id<CPLEngineTransportTask> transportTask;

- (void).cxx_destruct;

@end
