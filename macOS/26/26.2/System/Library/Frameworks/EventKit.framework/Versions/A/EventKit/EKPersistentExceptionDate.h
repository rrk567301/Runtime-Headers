@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)date;
- (id)owner;
- (void)setOwner:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
- (id)description;
- (void)setDate:(id)a0;

@end
