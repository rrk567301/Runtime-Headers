@class TRIClient;

@interface SCDAUtilities : NSObject {
    TRIClient *_trialClient;
}

+ (id)sharedUtilities;

- (id)init;
- (void).cxx_destruct;

@end
