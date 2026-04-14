@interface _NSMatrixPlugin : _NSSelectionBinderPlugin {
    struct __matrixPluginFlags { unsigned char _allowsEmptySelection : 1; unsigned char _testedAllowsEmptySelection : 1; unsigned char _invertedAllowsEmptySelection : 1; unsigned int _reservedMatrixPlugin : 29; } _matrixPluginFlags;
}

+ (BOOL)isUsableWithObject:(id)a0;

- (id)initWithBinder:(id)a0 object:(id)a1;
- (void)connectionWasEstablished:(id)a0;
- (unsigned long long)allowedValueBindingMask;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (unsigned long long)allowedContentBindingMask;
- (void)populateObject:(id)a0 withContent:(id)a1 valueKey:(id)a2 objectKey:(id)a3 insertsNullPlaceholder:(BOOL)a4;
- (id)objectMechanismsRequired;
- (Class)_valueClass:(id)a0;

@end
