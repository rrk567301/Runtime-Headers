@interface NSWindowBinder : NSViewStateBinder

+ (void)initialize;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (void)_applicationWillTerminate:(id)a0;

- (BOOL)isBindingReadOnly:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (Class)valueClassForBinding:(id)a0;
- (BOOL)_isBooleanBinding:(id)a0;
- (BOOL)shouldProcessObservations;
- (void)windowDidResize:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)window:(id)a0 didChangeToVisibleState:(BOOL)a1;
- (void)_updateWindow:(id)a0 withVisibilityState:(id)a1;
- (void)_updateWindow:(id)a0 withWidth:(id)a1 height:(id)a2;

@end
