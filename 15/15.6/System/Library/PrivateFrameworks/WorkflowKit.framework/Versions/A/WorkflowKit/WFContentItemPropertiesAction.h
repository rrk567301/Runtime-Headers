@interface WFContentItemPropertiesAction : WFContentItemAction

+ (char)outputIsExemptFromTaintTrackingInheritance;

- (id)localizedNameWithContext:(id)a0;
- (id)properties;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)inputParameterKey;
- (char)inputRequired;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)parameterSummary;
- (char)setParameterState:(id)a0 forKey:(id)a1;
- (void)finishWithItems:(id)a0 property:(id)a1 coercionPerformed:(char)a2;
- (id)selectedProperty;

@end
