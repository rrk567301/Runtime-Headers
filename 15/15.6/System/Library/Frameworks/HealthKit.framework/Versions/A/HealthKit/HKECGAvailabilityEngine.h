@interface HKECGAvailabilityEngine : NSObject

+ (id)shouldAdvertiseECG2WithSupportedRegion:(char)a0 meetsAgeRequirement:(char)a1 backgroundDeliveredNotAdvertised:(char)a2 prevOnboarded:(char)a3 watchCapable:(char)a4 phoneCapable:(char)a5 isTinker:(char)a6;

@end
