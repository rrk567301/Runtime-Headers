@interface ActionParameterResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)successWithResolvedActionParameter:(id)a0;
+ (id)disambiguationWithActionParametersToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithActionParameterToConfirm:(id)a0;

@end
