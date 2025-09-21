@interface HNFeatureFlags : NSObject

+ (char)isContextualUnderstandingEnabled;
+ (char)isContextualUnderstandingNotificationsEnabled;
+ (char)isHumanUnderstandingDataCollectionEnabled;
+ (char)isHumanUnderstandingEvidenceEnabled;

- (id)init;

@end
