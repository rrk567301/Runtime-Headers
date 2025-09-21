@interface CUIKTTLDescriptionGeneratorUtilities : NSObject

+ (id)descriptionForType:(unsigned long long)a0;
+ (char)ttlDescriptionShouldIncludeTrafficForHypothesis:(id)a0;
+ (char)ttlDescriptionShouldIncludeTrafficForHypothesisThatSupportsLiveTraffic:(char)a0 transportType:(int)a1 eta:(double)a2;
+ (unsigned long long)ttlDescriptionTypeForDate:(id)a0 hypothesis:(id)a1;

@end
