@interface HDBirthDateEntity : HDSampleEntity

+ (BOOL)isConcreteEntity;
+ (id)privateSubEntities;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)codableObjectsFromObjectCollection:(id)a0;

@end
