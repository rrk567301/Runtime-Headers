@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)isPipelineEnabled;
- (void).cxx_destruct;
- (int)maxCategoricalFeaturesCount;
- (id)init;

@end
