@class NSPopover, NSArray, NSString, WFTextTokenChooser, WFVariableSubstitutableParameterState, WFEnumerationParameter;

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WorkflowEditor.ParameterValuePickerViewControllerDelegate, NSPopoverDelegate>

@property (retain, nonatomic) WFEnumerationParameter *parameter;
@property (copy, nonatomic) NSArray *parameterStates;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSPopover *parameterValuePickerPopover;
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (nonatomic) long long editingSlotArrayIndex;
@property (nonatomic) BOOL suppressAutomaticCancellation;
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentWithParameter:(id)a0 state:(id)a1 editingSlotArrayIndex:(long long)a2 initialCollection:(id)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 processing:(BOOL)a6 presentationAnchor:(id)a7 cancelHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;

- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverWillClose:(id)a0;
- (void)cancelOperation;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)updatePossibleStates;
- (void)parameterAttributesDidChange:(id)a0;
- (void)parameterValuePickerWithViewController:(id)a0 didFinishWithParameterState:(id)a1;
- (void)parameterValuePickerDidStartSelectingMagicVariableWithViewController:(id)a0;
- (void)parameterValuePickerDidCancelWithViewController:(id)a0;
- (void)parameterValuePickerDidClearWithViewController:(id)a0;
- (id)initWithParameter:(id)a0 currentState:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)parameterValuePickingDidFinishWithParameterState:(id)a0;
- (void)parameterValuePickingDidClear;
- (void)parameterValuePickingDidCancel;

@end
