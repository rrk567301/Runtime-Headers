@class NSArray, NSString;
@protocol WFActionOutput;

@interface WFWorkflowActionTree : NSObject {
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ _layout;
    void /* unknown type, empty encoding */ actionObserver;
    void /* unknown type, empty encoding */ connectorState;
    void /* unknown type, empty encoding */ variableAvailability;
    void /* unknown type, empty encoding */ batchUpdateState;
}

@property (nonatomic, readonly) BOOL isShortcutInputVariableUsed;
@property (nonatomic, readonly) id<WFActionOutput> shortcutInputActionOutput;
@property (nonatomic) BOOL notifyVariablesOfChanges;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (id)actionAtIndex:(long long)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithActions:(id)a0;
- (void)insertActions:(id)a0 atIndex:(long long)a1;
- (BOOL)removeActionAtIndex:(long long)a0;
- (BOOL)actionIsConnectedToPreviousAction:(id)a0;
- (id)actionsGroupedWithAction:(id)a0;
- (id)actionsInControlFlowBranch:(id)a0;
- (id)actionsInsideAction:(id)a0;
- (id)actionsNestedInsideAction:(id)a0;
- (void)addVariableObserver:(id)a0;
- (long long)indentationLevelOfActionAtIndex:(long long)a0;
- (long long)indexOfAction:(id)a0;
- (id)initWithActionTree:(id)a0;
- (id)outputsForAction:(id)a0;
- (id)outputsForAction:(id)a0 inScopeOfAction:(id)a1;
- (void)removeVariableObserver:(id)a0;
- (long long)validIndexForInsertingActionAtIndex:(long long)a0;
- (id)actionsProvidingVariableNamed:(id)a0 atIndex:(long long)a1;
- (id)availableOutputActionsAtIndex:(long long)a0;
- (id)availableVariableNamesAtIndex:(long long)a0;
- (id)inheritedInputVariableForAction:(id)a0 workflowInputTypes:(id)a1 ignoreInputTypes:(BOOL)a2;
- (id)outputActionWithID:(id)a0;
- (id)possibleContentClassesForAction:(id)a0;
- (id)possibleContentClassesForVariableNamed:(id)a0 atIndex:(long long)a1;

@end
