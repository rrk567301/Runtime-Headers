@interface CNDefaultQuickActionsEnvironment : NSObject

+ (id)environment;
+ (id)capabilities;
+ (id)schedulerProvider;
+ (id)defaultActionFetcher;
+ (id)idsAvailabilityProvider;
+ (id)idsIDQueryControllerWrapper;

@end
