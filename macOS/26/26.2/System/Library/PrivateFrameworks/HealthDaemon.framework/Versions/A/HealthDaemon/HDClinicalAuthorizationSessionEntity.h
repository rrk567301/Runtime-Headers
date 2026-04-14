@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)checkConstraints;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)joinClausesForProperty:(id)a0;

@end
