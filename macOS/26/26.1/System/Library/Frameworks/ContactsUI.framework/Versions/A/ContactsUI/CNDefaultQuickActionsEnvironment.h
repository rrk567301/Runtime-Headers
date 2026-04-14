@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)applicationWorkspace;
+ (id)environment;
+ (id)capabilities;
+ (id)schedulerProvider;
+ (id)idsAvailabilityProvider;
+ (id)defaultActionFetcher;
+ (id)idsIDQueryControllerWrapper;

@end
