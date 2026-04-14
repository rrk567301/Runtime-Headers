@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setOwner:(id)a0;
- (id)date;
- (id)description;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
- (void)setDate:(id)a0;

@end
