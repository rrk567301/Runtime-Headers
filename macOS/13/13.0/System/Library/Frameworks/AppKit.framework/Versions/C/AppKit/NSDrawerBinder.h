@interface NSDrawerBinder : NSViewStateBinder {
    struct __drawerBinderFlags { unsigned char _visibleStateHasBeenSet : 1; unsigned char _expectedVisibleState : 1; unsigned int _reservedDrawerBinder : 30; } _drawerBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;

- (void)_init;
- (void)_connectionWasEstablished;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (Class)valueClassForBinding:(id)a0;
- (BOOL)_isBooleanBinding:(id)a0;
- (BOOL)shouldProcessObservations;
- (void)_updateDrawer:(id)a0 withVisibilityState:(id)a1;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)drawer:(id)a0 didChangeToState:(BOOL)a1;

@end
