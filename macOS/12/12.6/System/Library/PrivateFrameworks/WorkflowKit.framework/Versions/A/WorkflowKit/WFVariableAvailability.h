@class NSMapTable, NSHashTable, WFWorkflow, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface WFVariableAvailability : NSObject

@property (retain, nonatomic) NSMapTable *providingActionsByVariableName;
@property (retain, nonatomic) NSMapTable *variableScopeLevelsByGroupingIdentifier;
@property (retain, nonatomic) NSMapTable *variableScopeEndActionsByStartAction;
@property (retain, nonatomic) NSMapTable *actionOutputVariableActionsByUUID;
@property (retain, nonatomic) NSHashTable *actionsUsingShortcutInputVariable;
@property (retain, nonatomic) NSCache *cachedContentClassesForVariableNameAtIndex;
@property (retain, nonatomic) NSHashTable *variableObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic, getter=isShortcutInputVariableUsed) BOOL shortcutInputVariableUsed;

+ (BOOL)actionIsEligibleForOutputVariable:(id)a0;

- (void).cxx_destruct;
- (void)invalidateCache;
- (id)initWithWorkflow:(id)a0;
- (id)possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (void)addVariableObserver:(id)a0;
- (void)removeVariableObserver:(id)a0;
- (id)availableVariableNamesAtIndex:(unsigned long long)a0;
- (id)availableOutputActionsAtIndex:(unsigned long long)a0;
- (BOOL)areVariablesAvailableAtIndex:(unsigned long long)a0;
- (BOOL)areActionOutputVariablesAvailableAtIndex:(unsigned long long)a0;
- (BOOL)isVariableWithName:(id)a0 availableAtIndex:(unsigned long long)a1;
- (BOOL)isVariableWithOutputUUIDAvailable:(id)a0 atIndex:(unsigned long long)a1;
- (id)actionsProvidingVariableName:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)a0;
- (void)actionDidChange:(id)a0 moved:(BOOL)a1 removed:(BOOL)a2;
- (void)invalidateContentClassCache;
- (void)invalidateActionOutputProviderCache;
- (void)updateShortcutInputVariableUsageForChangeInAction:(id)a0 removed:(BOOL)a1;
- (void)renameVariable:(id)a0 to:(id)a1 fromAction:(id)a2;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)a0;
- (void)populateCache;
- (void)invalidateActionsUsingShortcutInputVariableCache;
- (BOOL)isVariableAvailableAtIndex:(unsigned long long)a0 withActionTest:(id /* block */)a1;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)populateActionOutputVariableActionsByUUID;
- (void)populateActionsUsingShortcutInputVariableCache;
- (id)_possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (void)actionsDidMove;
- (void)notifyVariablesChanged;
- (void)notifyContentClassesChanged;

@end
