@class PHAVisionServiceFaceProcessingWorker, NSArray;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {
    id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    unsigned long long _totalSteps;
    unsigned long long _currentStep;
}

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (float)percentComplete;
- (id)initWithFaceProcessingWorker:(id)a0 faceCrops:(id)a1;

@end
