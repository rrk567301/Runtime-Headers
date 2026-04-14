@interface PANeutrinoConversionUtility : NSObject

+ (id)adjustmentForOperation:(id)a0 isForRAW:(BOOL)a1 autoSettingsStorage:(id)a2;
+ (id)operationForAdjustment:(id)a0 isForRAW:(BOOL)a1 autoSettingsStorage:(id)a2;
+ (id)operationIdentifierForAdjustmentIdentifier:(id)a0;
+ (id)compositionKeyForOperationIdentifier:(id)a0;
+ (id)_descriptionToCompositionMap;
+ (id)_compositionToDescriptionMap;
+ (id)_generateDescriptionToCompositionMap;
+ (id)_generateCompositionToDescriptionMap;
+ (void)testConversionOnOperations:(id)a0 isForRAW:(BOOL)a1;
+ (void)testConversionOnOperation:(id)a0 isForRAW:(BOOL)a1;

@end
