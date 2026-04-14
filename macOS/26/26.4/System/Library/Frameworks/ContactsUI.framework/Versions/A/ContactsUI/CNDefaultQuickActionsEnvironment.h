@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)environment;
+ (id)applicationWorkspace;
+ (id)capabilities;
+ (id)schedulerProvider;
+ (id)idsAvailabilityProvider;
+ (id)defaultActionFetcher;
+ (id)idsIDQueryControllerWrapper;

@end
