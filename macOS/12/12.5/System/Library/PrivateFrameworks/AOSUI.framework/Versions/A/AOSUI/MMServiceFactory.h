@interface MMServiceFactory : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)orderedServiceIDs:(id)a0;
+ (id)sharedServiceFactory;
+ (id)defaultOrderedServiceIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serviceWithServiceID:(id)a0 forAccount:(id)a1;

@end
