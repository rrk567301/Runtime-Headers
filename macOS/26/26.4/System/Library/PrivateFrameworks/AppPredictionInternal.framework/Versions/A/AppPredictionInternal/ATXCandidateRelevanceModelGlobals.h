@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (int)maxCategoricalFeaturesCount;
- (BOOL)isPipelineEnabled;
- (void).cxx_destruct;
- (id)init;

@end
