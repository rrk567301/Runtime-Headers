@interface _DKPrivacyMaintainer : NSObject

+ (id)deletionPredicateForBundleID:(id)a0;
+ (void)maintainPrivacyWithKnowledgeStorage:(id)a0 installedApps:(id)a1 deleteMaxCount:(unsigned long long)a2 objectMaxCount:(unsigned long long)a3 objectMaxLifespan:(double)a4 activity:(id)a5;

@end
