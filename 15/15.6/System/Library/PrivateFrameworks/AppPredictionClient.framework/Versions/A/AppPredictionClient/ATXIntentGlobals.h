@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)approvedSiriKitIntents;
- (char)onlyAcceptBecomeCurrentNSUAs;
- (char)onlyUseEligibleForPrediction;

@end
