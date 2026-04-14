@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setOwner:(id)a0;
- (void)setDate:(id)a0;
- (id)date;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)owner;
- (int)entityType;
- (id)description;

@end
