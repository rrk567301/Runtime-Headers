@interface HDBQuantitySampleEntityBase : HDSampleEntity

+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)isConcreteEntity;

@end
