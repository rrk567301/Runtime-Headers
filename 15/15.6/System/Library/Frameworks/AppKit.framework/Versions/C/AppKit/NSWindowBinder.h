@interface NSWindowBinder : NSViewStateBinder

+ (void)initialize;
+ (void)_applicationWillTerminate:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_updateWindow:(id)a0 withWidth:(id)a1 height:(id)a2;
- (void)window:(id)a0 didChangeToVisibleState:(char)a1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (char)_isBooleanBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)_updateWindow:(id)a0 withVisibilityState:(id)a1;
- (char)isBindingReadOnly:(id)a0;
- (char)shouldProcessObservations;
- (Class)valueClassForBinding:(id)a0;
- (void)windowDidResize:(id)a0;

@end
