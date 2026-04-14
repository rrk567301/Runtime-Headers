@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (id)init;
- (id)approvedSiriKitIntents;
- (BOOL)onlyUseEligibleForPrediction;
- (void).cxx_destruct;

@end
