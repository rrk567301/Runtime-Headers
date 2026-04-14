@interface IDSIDSServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;
- (BOOL)requiresIDSConnection;
- (BOOL)isInDebilitatedMode;

@end
