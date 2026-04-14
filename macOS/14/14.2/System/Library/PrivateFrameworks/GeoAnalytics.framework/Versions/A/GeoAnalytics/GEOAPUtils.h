@interface GEOAPUtils : NSObject

+ (id)GEOAPApplicationIdentifier;
+ (void)appTypeForAppId:(id)a0 resultBlock:(id /* block */)a1;
+ (id)daemonIdAdditions;
+ (id)daemonSet;
+ (id)firstPartySet;
+ (int)functionalAppGroup;
+ (int)myAppType;

@end
