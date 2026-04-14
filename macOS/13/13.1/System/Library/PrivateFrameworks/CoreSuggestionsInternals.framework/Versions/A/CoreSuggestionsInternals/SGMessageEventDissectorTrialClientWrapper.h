@class _PASLock;

@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)eventExtractionAssetsPath;
- (id)eventClassifierModelPath;
- (id)eventClassifierThreshold;
- (id)messageProcessingLimit;
- (id)rateLimitInterval;

@end
