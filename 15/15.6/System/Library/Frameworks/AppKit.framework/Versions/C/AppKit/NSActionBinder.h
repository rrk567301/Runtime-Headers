@interface NSActionBinder : NSEditorBinder {
    SEL _selector;
    struct __actionBinderFlags { unsigned char _allSeparateArrayArgumentsBoundToIdenticalController : 1; unsigned int _reservedActionBinder : 31; } _actionBinderFlags;
}

+ (id)_pluginProtocol;
+ (id)bindingCategory;
+ (id)_enumeratedArgumentBindings:(unsigned long long)a0;
+ (id)_enumerationBinding;
+ (id)_targetBinding;
+ (id)bindingsForObject:(id)a0;

- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSelector:(SEL)a0;
- (void)_init;
- (void)performAction:(id)a0;
- (char)_performActionWithCommitEditing;
- (unsigned long long)_argumentBindingCount;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_executePerformAction;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 forBinding:(id)a2;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (void)_performActionWithCommitEditing:(id)a0 didCommit:(char)a1 contextInfo:(id)a2;
- (id)_referenceBinding;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (char)_targetAndArgumentsAcceptableForMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (char)_targetBindingBound;
- (char)allowsNullArgumentWithBinding:(id)a0;
- (id)availableBindings;
- (char)bindingRunsAlerts:(id)a0;
- (char)canApplyValueTransformer:(id)a0 toBinding:(id)a1;
- (char)invokesSeparatelyWithArrayObjectsWithBinding:(id)a0;
- (char)isBindingReadOnly:(id)a0;
- (void)removeBinding:(id)a0;
- (char)selectionSupportsEnabledState;
- (void)setAllowsNullArgument:(char)a0 withBinding:(id)a1;
- (void)setInvokesSeparatelyWithArrayObjects:(char)a0 withBinding:(id)a1;
- (char)targetAndArgumentsAcceptable;
- (char)targetAndArgumentsAcceptableAtIndex:(unsigned long long)a0;
- (char)targetAndArgumentsAcceptableAtIndexPath:(id)a0;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;

@end
