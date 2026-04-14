@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)approvedSiriKitIntents;
- (BOOL)onlyUseEligibleForPrediction;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (void).cxx_destruct;
- (id)init;

@end
