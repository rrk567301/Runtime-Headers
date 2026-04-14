@interface RTVisitRedactionUtilities : NSObject

+ (id)obfuscatedVisitDateIntervalForEntryDate:(id)a0 previousObfuscatedVisitEntryDate:(id)a1;
+ (id)redactVisits:(id)a0 authorizedLocations:(id)a1 bluePOICategoryDenylist:(id)a2;
+ (BOOL)shouldRedactAllVisitsForCurrentRegion;
+ (id)visitStartDateRangeFromObfuscatedStartDate:(id)a0;

@end
