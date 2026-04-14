@class NSString, WFVariableString;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate>

@property (readonly, nonatomic) long long latestMenuChoice;
@property (copy, nonatomic) WFVariableString *itemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)serializedParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)inputPassthrough;
- (void)initializeParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputRequired;
- (id)createAccompanyingActions;
- (void)arrayParameter:(id)a0 confirmDeletionOfItemAtIndex:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)arrayParameter:(id)a0 itemWasInserted:(id)a1 atIndex:(unsigned long long)a2;
- (void)arrayParameter:(id)a0 itemWasMovedFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)arrayParameter:(id)a0 itemWasUpdatedAtIndex:(unsigned long long)a1 toValue:(id)a2;
- (void)variableDidChange:(id)a0;
- (BOOL)ignoresOutputFromAction:(id)a0 inWorkflow:(id)a1;
- (id)inputSourceInWorkflow:(id)a0;
- (id)defaultOutputName;
- (id)newIntermediaryActionWithMenuItemTitle:(id)a0;
- (void)showAlertWithInput:(id)a0;
- (id)intermediaryActions;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)a0;

@end
