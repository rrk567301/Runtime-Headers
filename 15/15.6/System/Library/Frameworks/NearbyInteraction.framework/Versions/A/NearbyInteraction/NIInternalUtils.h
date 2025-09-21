@interface NIInternalUtils : NSObject

+ (const char *)NINearbyObjectDiscoveryPriorityToString:(long long)a0;
+ (const char *)NINearbyObjectUpdateRateToString:(long long)a0;
+ (const char *)NISessionBackgroundModeToString:(long long)a0;
+ (id)NISystemResourceAvailabilityToString:(unsigned long long)a0;
+ (const char *)AntennaDiversityOverrideToString:(long long)a0;
+ (const char *)NINearbyObjectUpdateRateToShortString:(long long)a0;
+ (const char *)NIRelationshipSpecifierToString:(unsigned long long)a0;
+ (id)NISystemPassiveAccessIntentToString:(unsigned int)a0;
+ (char)isIntValidAntennaDiversityOverride:(long long)a0;
+ (char)isIntValidNearbyObjectDiscoveryPriority:(long long)a0;
+ (char)isIntValidNearbyObjectUpdateRate:(long long)a0;
+ (char)isIntValidRelationshipSpecifier:(long long)a0;
+ (char)nearbyObjectUpdateRate:(long long)a0 isGreaterThan:(long long)a1;

@end
