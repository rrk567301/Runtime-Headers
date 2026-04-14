@class NSDictionary;

@interface ATXIntentGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)approvedSiriKitIntents;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (void).cxx_destruct;
- (BOOL)onlyUseEligibleForPrediction;
- (id)init;

@end
