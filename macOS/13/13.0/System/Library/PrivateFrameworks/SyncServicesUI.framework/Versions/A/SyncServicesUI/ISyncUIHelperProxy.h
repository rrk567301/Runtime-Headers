@interface ISyncUIHelperProxy : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedProxy;

- (id)labelTextAttributes;
- (id)uiHelperForEntityName:(id)a0;
- (id)uiHelperForPropertyName:(id)a0 onEntityName:(id)a1;
- (id)normalTextAttributes;
- (id)uiHelperForClassName:(id)a0;
- (id)uiHelperForPropertyNames:(id)a0 onEntityName:(id)a1;
- (id)attributedStringForRecordNode:(id)a0 propertyName:(id)a1 withComparisonNodes:(id)a2;
- (id)attributedStringForRecordNode:(id)a0 dependentPropertyNames:(id)a1 withComparisonNodes:(id)a2;
- (id)attributedStringLabelForRecordNode:(id)a0 propertyName:(id)a1 withComparisonNodes:(id)a2;
- (id)identityStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)identityStringIgnoringDefaultUIHelperForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)relationshipIdentityStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)attributedStringForRecordNode:(id)a0 withComparisonNodes:(id)a1;
- (id)orderedPropertyNamesForPropertyNames:(id)a0 forRecordNode:(id)a1 withComparisonNodes:(id)a2;
- (id)identityStringSecondLineAttributes;
- (id)labelTextSeparator;
- (id)childNodeSeparatorAttributedString;
- (id)changedTextAttributes;
- (id)changedTextColor;
- (id)identitySeparatorAttributedString;
- (id)identityStringFirstLineAttributes;

@end
