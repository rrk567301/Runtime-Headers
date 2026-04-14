@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)onlyUseEligibleForPrediction;
- (id)init;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (void).cxx_destruct;
- (id)approvedSiriKitIntents;

@end
