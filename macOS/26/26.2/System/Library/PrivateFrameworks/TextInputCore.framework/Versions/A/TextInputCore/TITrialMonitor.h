@class TRIClient;

@interface TITrialMonitor : NSObject {
    TRIClient *_trialClient;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)updateValueForFactor:(id)a0;
- (void)updateValues;

@end
