@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (BOOL)insertOrUpdateAppSDKVersionToken:(unsigned long long)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (unsigned long long)appSDKVersionTokenForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)launchTimeForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)tableAliases;
+ (BOOL)removeBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)setLaunchTime:(id)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;

@end
