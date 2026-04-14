@interface LPApplicationIdentification : NSObject

+ (BOOL)isMessagesOrMessagesViewService;
+ (id)bundleIdentifiersForKnownApplication:(long long)a0;
+ (BOOL)isKnownApplication:(long long)a0;
+ (long long)knownApplicationForBundleIdentifier:(id)a0;
+ (id)unlocalizedNameForBundleIdentifier:(id)a0;
+ (id)unlocalizedNameForKnownApplication:(long long)a0;

@end
