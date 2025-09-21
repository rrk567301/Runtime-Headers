@class MADVideoSafetyClassificationRequest, MADServiceVideoAsset, SCMLVideoAnalyzer, NSDictionary, NSError, NSObject, SCMLHandler;
@protocol VCPBlockBasedVideoProcessorProtocol;

@interface MADServiceVideoSafetyProcessingTask : MADServiceVideoProcessingSubtask {
    MADVideoSafetyClassificationRequest *_request;
    MADServiceVideoAsset *_asset;
    NSObject<VCPBlockBasedVideoProcessorProtocol> *_videoProcessor;
    SCMLHandler *_handler;
    SCMLVideoAnalyzer *_videoAnalyzer;
    NSError *_processError;
    char _isSensitive;
    NSDictionary *_scoresForLabels;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

@property (nonatomic) char enablePowerLog;

- (void).cxx_destruct;
- (char)run:(id *)a0;
- (id)finalizeSafetyResultsWithError:(id *)a0;
- (void)_processFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0 stop:(char *)a1;
- (char)configureVideoProcessorWithError:(id *)a0;
- (id)initWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;

@end
