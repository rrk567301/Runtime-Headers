@interface HDProfileAuthorizationEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)anyForBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)fetchStatus:(long long *)a0 profile:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
+ (char)setStatus:(long long)a0 profile:(id)a1 bundleIdentifier:(id)a2 dateModified:(id)a3 error:(id *)a4;
+ (char)setStatusIfNeeded:(long long)a0 profile:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;

- (char)unitTest_getBundleIdentifier:(id *)a0 status:(long long *)a1 dateModified:(id *)a2 forProfile:(id)a3 error:(id *)a4;

@end
