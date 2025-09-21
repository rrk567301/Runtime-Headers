@interface TSCHPropertyMutationHelper : NSObject

+ (char)anyPropertiesChanged:(id)a0 forStyleOwner:(id)a1;
+ (void)applyMutations:(id)a0 forImport:(char)a1 forStyleOwner:(id)a2 withNonStylePropertyList:(id)a3 toStylePropertyMap:(id)a4 andNonStylePropertyMap:(id)a5;
+ (id)convertToStyleSwapTuplesForStyleOwner:(id)a0 styleSwapType:(int)a1 nonStyleSwapType:(int)a2 index:(unsigned long long)a3 fromMutations:(id)a4 forImport:(char)a5 withOptionalStyleValueConversionBlock:(id /* block */)a6;
+ (char)propertyChanged:(int)a0 forStyleOwner:(id)a1 newValue:(id)a2;
+ (int)safe_specificMutationPropertyForGeneric:(int)a0 styleOwner:(id)a1 allowSpecificProperties:(char)a2;
+ (void)setValue:(id)a0 forProperty:(int)a1 ofStyleOwner:(id)a2;
+ (int)specificMutationPropertyForGeneric:(int)a0 styleOwner:(id)a1 allowSpecificProperties:(char)a2;
+ (id)styleSwapTuplesFromMutationTuples:(id)a0 forImport:(char)a1;
+ (id)transformedTuplesWithStyleOwner:(id)a0 mutations:(id)a1;

- (id)init;

@end
