@class NSString, NSIndexPath;

@interface _NSValueBinderPlugin : _NSBinderPlugin <_NSValueBinderPlugin> {
    struct __valueBinderPluginFlags { unsigned char _isActionCellPlugin : 1; unsigned char _isFormatterPlugin : 1; unsigned char _isObjectValueInvalidationCapable : 1; unsigned int _reservedValueBinderPlugin : 29; } _valueBinderPluginFlags;
    unsigned long long _affectedIndex;
    NSIndexPath *_affectedIndexPath;
    Class _valueClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isUsableWithObject:(id)a0;

- (void)dealloc;
- (char)isBooleanValueBindingForObject:(id)a0;
- (void)_actionHasBegun:(id)a0 atIndex:(unsigned long long)a1;
- (void)_actionHasBegun:(id)a0 atIndexPath:(id)a1;
- (Class)_valueClass:(id)a0;
- (void)actionHasBegun:(id)a0 sender:(id)a1;
- (void)actionHasEnded:(id)a0 sender:(id)a1;
- (unsigned long long)allowedValueBindingMask;
- (char)applyObjectValue:(id *)a0 forBinding:(id)a1 operation:(int *)a2 needToRunAlert:(char *)a3 error:(id *)a4;
- (id)binderReferenceObjectValue;
- (char)canIgnoreSettingMinAndMaxForObject:(id)a0;
- (char)canSupportMinAndMaxForObject:(id)a0;
- (char)conditionalBehaviorOffByDefault:(id)a0;
- (void)connectionWasBroken:(id)a0;
- (void)connectionWasEstablished:(id)a0;
- (struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })editedMode:(id)a0 forEditingOrAction:(char)a1;
- (id)editingBinderForControl:(id)a0;
- (void)editingHasBegun:(id)a0;
- (void)editingHasEnded:(id)a0;
- (void)editingWasAborted:(id)a0;
- (id)formattedValueInObject:(id)a0 errorEncountered:(char *)a1 error:(id *)a2;
- (id)formatterOfObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (void)invalidateObjectValueInObject:(id)a0;
- (char)isObjectTableColumnDataCell:(id)a0;
- (char)needsAction;
- (char)needsDelegate;
- (id)objectMechanismsRequired;
- (id)objectValueInvalidationCapableObjectForObject:(id)a0;
- (char)prefersEnabledOverEditable:(id)a0;
- (char)shouldAlwaysUpdateDisplayValue;
- (char)shouldIgnoreAction:(id)a0;
- (char)shouldProvideSortDescriptor:(id)a0 optionsAdvertisingOnly:(char)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (void)storeMin:(char)a0 andMax:(char)a1 ofObject:(id)a2;
- (char)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (char)updateCellOrControl:(id)a0 forMinValue:(id)a1;
- (Class)valueClass:(id)a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (id)viewForObject:(id)a0;

@end
