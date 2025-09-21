@class NSString, WFVariableString;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>

@property (readonly, nonatomic) long long latestMenuChoice;
@property (copy, nonatomic) WFVariableString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)localizedNameWithContext:(id)a0;
- (id)serializedParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)initializeParameters;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (BOOL)legacyBehaviorIgnoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (void)arrayParameter:(id)a0 confirmDeletionOfItemAtIndex:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)createAccompanyingActions;
- (void)variableDidChange:(id)a0;
- (id)newIntermediaryActionWithMenuItemTitle:(id)a0;
- (void)showAlertWithInput:(id)a0;

@end
