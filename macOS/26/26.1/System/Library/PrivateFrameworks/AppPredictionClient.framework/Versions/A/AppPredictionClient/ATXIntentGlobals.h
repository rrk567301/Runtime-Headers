@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)approvedSiriKitIntents;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (BOOL)onlyUseEligibleForPrediction;
- (void).cxx_destruct;
- (id)init;

@end
