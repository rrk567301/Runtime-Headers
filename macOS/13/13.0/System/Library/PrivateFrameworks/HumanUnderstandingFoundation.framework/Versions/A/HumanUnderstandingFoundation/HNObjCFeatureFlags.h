@interface HNObjCFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isPersonalUnderstandingEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;
+ (BOOL)isHumanUnderstandingDataCollectionEnabled;

@end
