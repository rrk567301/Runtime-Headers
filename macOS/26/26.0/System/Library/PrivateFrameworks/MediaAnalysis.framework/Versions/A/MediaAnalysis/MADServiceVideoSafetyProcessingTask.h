@class NSError, MADVideoSafetyClassificationRequest, SCMLHandler, NSMutableDictionary, NSDictionary, SCMLVideoAnalyzer, MADServiceVideoAsset, NSObject;
@protocol VCPBlockBasedVideoProcessorProtocol;

@interface MADServiceVideoSafetyProcessingTask : MADServiceVideoProcessingSubtask {
    MADVideoSafetyClassificationRequest *_request;
    MADServiceVideoAsset *_asset;
    NSObject<VCPBlockBasedVideoProcessorProtocol> *_videoProcessor;
    SCMLHandler *_handler;
    SCMLVideoAnalyzer *_videoAnalyzer;
    NSError *_processError;
    NSDictionary *_detectionResults;
    NSMutableDictionary *_scoresForLabels;
    unsigned long long _remainingDetections;
    unsigned long long _detectedharms;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

@property (nonatomic) BOOL enablePowerLog;

- (BOOL)run:(id *)a0;
- (void).cxx_destruct;
- (id)finalizeSafetyResultsWithError:(id *)a0;
- (void)_addToDetecionResultsWithSensitivityKey:(id)a0 sensitivity:(id)a1 sensitivityScoreKey:(id)a2 sensitivityScore:(id)a3;
- (void)_processFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0 stop:(BOOL *)a1;
- (id)classificationResults;
- (BOOL)configureVideoProcessorWithError:(id *)a0;
- (BOOL)fetchCachedAnalysisResults;
- (id)initWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (BOOL)performQRCodeDetectionsForVideoURL:(id)a0;
- (id)storeSafetyClassificationResultsForSharedAsset;
- (BOOL)validateProcessingSettingsWithError:(id *)a0;

@end
