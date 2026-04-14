@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)maxCategoricalFeaturesCount;
- (BOOL)isPipelineEnabled;

@end
