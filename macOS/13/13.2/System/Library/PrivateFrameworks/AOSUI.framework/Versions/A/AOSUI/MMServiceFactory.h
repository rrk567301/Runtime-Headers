@interface MMServiceFactory : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedServiceFactory;
+ (id)defaultOrderedServiceIDs;
+ (id)orderedServiceIDs:(id)a0 appleAccount:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serviceWithServiceID:(id)a0 forAccount:(id)a1;

@end
