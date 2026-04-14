@class _PASLock;

@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)eventClassifierModelPath;
- (id)eventClassifierThreshold;
- (id)eventExtractionAssetsPath;
- (id)messageProcessingLimit;
- (id)rateLimitInterval;
- (void)updateFactors;

@end
