@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)owner;
- (void)setDate:(id)a0;
- (void)setOwner:(id)a0;
- (id)date;
- (id)description;

@end
