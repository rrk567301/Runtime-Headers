@interface HNFeatureFlags : NSObject

+ (BOOL)isContextualUnderstandingEnabled;
+ (BOOL)isPersonalUnderstandingEnabled;
+ (BOOL)isHumanUnderstandingEvidenceEnabled;
+ (BOOL)isHumanUnderstandingDataCollectionEnabled;
+ (BOOL)isContextualUnderstandingNotificationsEnabled;

- (id)init;

@end
