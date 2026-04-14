@class NSDictionary;

@interface ATXInfoToBlendingConfidenceMapper : NSObject {
    NSDictionary *_map;
}

- (void).cxx_destruct;
- (long long)blendingConfidenceCategoryForInfoConfidenceLevel:(long long)a0;
- (id)init;
- (long long)minInfoConfidenceLevelForBlendingConfidenceCategory:(long long)a0;

@end
