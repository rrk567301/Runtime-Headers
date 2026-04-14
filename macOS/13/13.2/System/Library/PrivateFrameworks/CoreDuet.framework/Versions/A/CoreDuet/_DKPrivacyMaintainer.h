@interface _DKPrivacyMaintainer : NSObject

+ (id)deletionPredicateForBundleID:(id)a0;
+ (unsigned long long)deleteMalformedNotificationUsageEvents:(id)a0;
+ (void)maintainPrivacyWithKnowledgeStorage:(id)a0 installedApps:(id)a1 installedAppExtensions:(id)a2 deleteMaxCount:(unsigned long long)a3 objectMaxCount:(unsigned long long)a4 objectMaxLifespan:(double)a5 activity:(id)a6;

@end
