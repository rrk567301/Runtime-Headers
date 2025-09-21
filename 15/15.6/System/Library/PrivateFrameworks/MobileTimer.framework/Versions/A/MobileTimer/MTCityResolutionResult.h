@interface MTCityResolutionResult : INObjectResolutionResult

+ (char)supportsSecureCoding;
+ (id)confirmationRequiredWithMTCityToConfirm:(id)a0;
+ (id)disambiguationWithMTCitysToDisambiguate:(id)a0;
+ (id)successWithResolvedMTCity:(id)a0;

@end
