@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (id)lastModifiedDate;
- (int)entityType;
- (void)setLastModifiedDate:(id)a0;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;

@end
