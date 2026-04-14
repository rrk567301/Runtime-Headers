@interface IDSCourierServerBag : IDSServerBag

+ (id)sharedInstance;
+ (id)_sharedInstanceForClass:(Class)a0;
+ (id)_bagCreationLock;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;

@end
