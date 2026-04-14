@interface HDBirthDateEntity : HDSampleEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)privateSubEntities;
+ (BOOL)isConcreteEntity;

@end
