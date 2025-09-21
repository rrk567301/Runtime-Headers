@interface ICModelAvailabilityManager : NSObject {
    void /* unknown type, empty encoding */ generalASRLock;
}

@property (class, nonatomic, retain) ICModelAvailabilityManager *sharedInstance;

@property (nonatomic, readonly) char supportsCallRecording;
@property (nonatomic, readonly) char supportsCallTranscription;
@property (nonatomic, readonly) char supportsPrivateCloudComputeSummary;
@property (nonatomic, readonly) char supportsOnDeviceSummary;
@property (nonatomic, readonly) char supportsGeneralASR;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAndCacheAsyncAvailabilities:(void (^)(void))a0;

@end
