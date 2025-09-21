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
@property (readonly, nonatomic, getter=isShortcutInputVariableUsed) char shortcutInputVariableUsed;

+ (char)actionIsEligibleForOutputVariable:(id)a0;

- (void).cxx_destruct;
- (void)invalidateCache;
- (void)populateCache;
- (id)initWithWorkflow:(id)a0;
- (id)possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (id)actionProvidingVariableWithOutputUUID:(id)a0;
- (void)addVariableObserver:(id)a0;
- (void)removeVariableObserver:(id)a0;
- (id)_possibleContentClassesForVariableNamed:(id)a0 atIndex:(unsigned long long)a1 context:(id)a2 excludingAction:(id)a3;
- (void)actionDidChange:(id)a0 moved:(char)a1 removed:(char)a2;
- (void)actionsDidMove;
- (id)actionsProvidingVariableName:(id)a0 atIndex:(unsigned long long)a1;
- (char)areActionOutputVariablesAvailableAtIndex:(unsigned long long)a0;
- (char)areVariablesAvailableAtIndex:(unsigned long long)a0;
- (id)availableOutputActionsAtIndex:(unsigned long long)a0;
- (id)availableVariableNamesAtIndex:(unsigned long long)a0;
- (id)availableVariableNamesExcludingThoseProvidedByAction:(id)a0;
- (void)enumerateActionsInScopeAtIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)invalidateActionOutputProviderCache;
- (void)invalidateActionsUsingShortcutInputVariableCache;
- (void)invalidateContentClassCache;
- (char)isVariableAvailableAtIndex:(unsigned long long)a0 withActionTest:(id /* block */)a1;
- (char)isVariableWithName:(id)a0 availableAtIndex:(unsigned long long)a1;
- (char)isVariableWithOutputUUIDAvailable:(id)a0 atIndex:(unsigned long long)a1;
- (void)notifyContentClassesChanged;
- (void)notifyVariablesChanged;
- (void)populateActionOutputVariableActionsByUUID;
- (void)populateActionsUsingShortcutInputVariableCache;
- (void)renameVariable:(id)a0 to:(id)a1 fromAction:(id)a2;
- (void)updateShortcutInputVariableUsageForChangeInAction:(id)a0 removed:(char)a1;
- (unsigned long long)variableScopeLevelForGroupingIdentifier:(id)a0;

@end
