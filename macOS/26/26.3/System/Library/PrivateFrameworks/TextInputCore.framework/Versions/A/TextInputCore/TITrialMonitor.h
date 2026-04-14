@class TRIClient;

@interface TITrialMonitor : NSObject {
    TRIClient *_trialClient;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateValueForFactor:(id)a0;
- (void)updateValues;

@end
