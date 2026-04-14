@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)date;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setDate:(id)a0;
- (int)entityType;

@end
