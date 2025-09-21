@interface HDSREntity : HDSampleEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (BOOL)isConcreteEntity;
+ (id)databaseTable;

@end
