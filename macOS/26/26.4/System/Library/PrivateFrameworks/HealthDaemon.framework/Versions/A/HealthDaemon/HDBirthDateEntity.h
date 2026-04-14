@interface HDBirthDateEntity : HDSampleEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (BOOL)isConcreteEntity;
+ (id)privateSubEntities;
+ (id)codableObjectsFromObjectCollection:(id)a0;

@end
