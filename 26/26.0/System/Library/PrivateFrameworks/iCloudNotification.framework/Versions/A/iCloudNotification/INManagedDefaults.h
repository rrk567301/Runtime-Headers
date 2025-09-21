@interface INManagedDefaults : NSObject

+ (id)sharedInstance;

- (id)valueForManagedDefault:(id)a0;
- (void)setValue:(id)a0 forManagedDefault:(id)a1;
- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)a0;

@end
