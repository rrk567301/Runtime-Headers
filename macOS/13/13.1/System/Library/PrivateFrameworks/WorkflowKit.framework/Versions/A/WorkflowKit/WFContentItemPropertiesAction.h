@interface WFContentItemPropertiesAction : WFContentItemAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)name;
- (id)keywords;
- (id)properties;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)inputParameterKey;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputMeasurementUnitType;
- (id)parameterSummary;
- (id)outputContentClasses;
- (id)descriptionSummary;
- (id)localizedDefaultOutputName;
- (BOOL)inputRequired;
- (id)localizedDescriptionResult;
- (id)selectedProperty;
- (void)finishWithItems:(id)a0 property:(id)a1 coercionPerformed:(BOOL)a2;

@end
