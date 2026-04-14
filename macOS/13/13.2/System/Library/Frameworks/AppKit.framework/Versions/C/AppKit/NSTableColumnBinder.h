@interface NSTableColumnBinder : NSViewStateBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;

- (BOOL)isBindingReadOnly:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (Class)valueClassForBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (BOOL)_shouldProcessObservations;
- (void)_updateTableColumn:(id)a0 withWidth:(id)a1;
- (void)tableColumn:(id)a0 didChangeToWidth:(double)a1;

@end
