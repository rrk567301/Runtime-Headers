@interface CRFormContentTypeRefiner : NSObject

+ (void)_refineAddressTypesWithContext:(struct ContentTypeRefinementContext { id x0; void *x1; } *)a0;
+ (id)_findSubTextFieldsInFields:(const void *)a0 maxLength:(unsigned long long)a1 minAspectRatio:(double)a2 contentTypes:(const void *)a3 includeNone:(char)a4;
+ (void)_groupCreditCardNumberWithContext:(struct ContentTypeRefinementContext { id x0; void *x1; } *)a0 shouldGroup:(char)a1;
+ (void)_groupOrRefinePhoneNumberWithContext:(struct ContentTypeRefinementContext { id x0; void *x1; } *)a0 shouldGroup:(char)a1;
+ (char)_isRegion:(id)a0 onLeftOfRegion:(id)a1 withTolerance:(double)a2;
+ (void)_refineCreditCardExpirationTypesWithContext:(struct ContentTypeRefinementContext { id x0; void *x1; } *)a0;
+ (void)_refineDateAndBirthdayTypesWithContext:(struct ContentTypeRefinementContext { id x0; void *x1; } *)a0 locale:(id)a1;
+ (id)groupAndAssignStructuralContentTypesForFields:(id)a0 locale:(id)a1 updateExternalFields:(char)a2;

@end
