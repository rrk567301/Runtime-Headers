@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (void)setLastModifiedDate:(id)a0;
- (id)lastModifiedDate;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;

@end
