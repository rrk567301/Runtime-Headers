@interface HDStateOfMindDomainEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)predicateForDomainsForObjectID:(long long)a0;
+ (id)domainsForObjectID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)insertDomainsForObjectID:(long long)a0 domains:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
