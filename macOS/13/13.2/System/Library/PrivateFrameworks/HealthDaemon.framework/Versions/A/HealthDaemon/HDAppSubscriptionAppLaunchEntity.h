@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)tableAliases;
+ (BOOL)setLaunchTime:(id)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)launchTimeForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)removeBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)insertOrUpdateAppSDKVersion:(unsigned int)a0 forBundleID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (unsigned int)appSDKVersionForBundleID:(id)a0 profile:(id)a1 error:(id *)a2;

@end
