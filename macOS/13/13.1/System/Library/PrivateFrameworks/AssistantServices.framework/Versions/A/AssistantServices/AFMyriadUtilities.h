@class TRIClient;

@interface AFMyriadUtilities : NSObject {
    TRIClient *_trialClient;
}

+ (id)sharedUtilities;

- (id)init;
- (void).cxx_destruct;
- (BOOL)myriadSelfLoggingTrialEnabled;

@end
