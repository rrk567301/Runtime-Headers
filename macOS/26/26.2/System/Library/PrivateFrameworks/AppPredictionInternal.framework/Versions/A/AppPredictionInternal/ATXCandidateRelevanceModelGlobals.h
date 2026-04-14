@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)isPipelineEnabled;
- (int)maxCategoricalFeaturesCount;
- (id)init;

@end
