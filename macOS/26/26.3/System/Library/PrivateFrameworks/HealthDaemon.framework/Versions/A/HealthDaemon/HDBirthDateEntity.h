@interface HDBirthDateEntity : HDSampleEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)privateSubEntities;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (BOOL)isConcreteEntity;

@end
