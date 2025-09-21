@interface CNAutocompleteEntitlementVerifier : NSObject

+ (char)currentProcessHasBooleanEntitlement:(id)a0;
+ (char)currentProcessHasCalendarEntitlement;
+ (char)currentProcessHasContactsEntitlement;
+ (char)currentProcessHasDuetEntitlement;
+ (char)currentProcessHasNetworkClientEntitlement;
+ (char)currentProcessHasRecentsEntitlement;
+ (char)currentProcessHasSuggestionsEntitlement;

@end
