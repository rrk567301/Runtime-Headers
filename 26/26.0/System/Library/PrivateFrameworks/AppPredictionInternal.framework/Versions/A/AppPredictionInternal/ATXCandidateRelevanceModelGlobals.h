@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)isPipelineEnabled;
- (id)init;
- (int)maxCategoricalFeaturesCount;
- (void).cxx_destruct;

@end
