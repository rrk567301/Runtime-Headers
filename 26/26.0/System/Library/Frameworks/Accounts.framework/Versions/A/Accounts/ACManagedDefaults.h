@interface ACManagedDefaults : NSObject

+ (id)sharedInstance;

- (id)valueForManagedDefault:(id)a0;
- (void)setValue:(id)a0 forManagedDefault:(id)a1;

@end
