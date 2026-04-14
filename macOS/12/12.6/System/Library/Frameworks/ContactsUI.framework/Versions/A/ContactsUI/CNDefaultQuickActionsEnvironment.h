@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)environment;
+ (id)capabilities;
+ (id)schedulerProvider;
+ (id)idsAvailabilityProvider;
+ (id)defaultActionFetcher;
+ (id)idsIDQueryControllerWrapper;

@end
