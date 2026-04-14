@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)schedulerProvider;
+ (id)capabilities;
+ (id)environment;
+ (id)applicationWorkspace;
+ (id)idsAvailabilityProvider;
+ (id)defaultActionFetcher;
+ (id)idsIDQueryControllerWrapper;

@end
