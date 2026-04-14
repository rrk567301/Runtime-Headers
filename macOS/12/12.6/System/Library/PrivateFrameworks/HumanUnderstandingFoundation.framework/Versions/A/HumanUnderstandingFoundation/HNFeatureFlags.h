@interface HNFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isPersonalUnderstandingEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;

- (id)init;

@end
