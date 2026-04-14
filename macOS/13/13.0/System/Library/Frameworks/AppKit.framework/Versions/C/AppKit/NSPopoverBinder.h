@interface NSPopoverBinder : NSViewStateBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)bindingsForObject:(id)a0;

- (BOOL)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;
- (BOOL)shouldProcessObservations;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)_updatePopover:(id)a0 withPositioningRect:(id)a1;
- (void)_updatePopover:(id)a0 withContentWidth:(id)a1 contentHeight:(id)a2;

@end
