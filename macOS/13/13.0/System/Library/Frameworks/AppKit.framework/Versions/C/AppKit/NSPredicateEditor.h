@class NSArray;

@interface NSPredicateEditor : NSRuleEditor {
    NSArray *_rootTrees;
    id _allTemplates;
    NSArray *_rootHeaderTrees;
    id _predicateTarget;
    SEL _predicateAction;
    struct { unsigned char suppressAction : 4; unsigned int reserved : 28; } _peFlags;
}

@property (copy) NSArray *rowTemplates;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (id)predicate;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)validateEditing;
- (void)_initRuleEditorShared;
- (BOOL)_wantsMinimalArchival;
- (long long)_queryNumberOfChildrenOfItem:(id)a0 withRowType:(unsigned long long)a1;
- (id)_queryChild:(long long)a0 ofItem:(id)a1 withRowType:(long long)a2;
- (id)_queryValueForItem:(id)a0 inRow:(long long)a1;
- (void)_updatePredicate;
- (void)_sendRuleAction;
- (void)reloadCriteria;
- (void)_changedItem:(id)a0 toItem:(id)a1 inRow:(long long)a2;
- (void)_templateControlValueDidChange:(id)a0;
- (BOOL)_forceUseDelegate;
- (void)_setDefaultTargetAndActionOnView:(id)a0;
- (id)_rowFromTemplate:(id)a0 originalTemplate:(id)a1 withRowType:(unsigned long long)a2;
- (id)_rowObjectFromPredicate:(id)a0;
- (void)_reflectPredicate:(id)a0;
- (id)_constructTreeForTemplate:(id)a0;
- (id)_constructTreesForTemplates:(id)a0;
- (id)_mergeTree:(id)a0;
- (void)_updateItemsBySimpleTemplates;
- (void)_updateItemsByCompoundTemplates;
- (id)_predicateFromRowItem:(id)a0;
- (unsigned long long)_compoundPredicateTypeForRootRows;
- (void)_updatePredicateFromRows;
- (BOOL)_sendsActionOnIncompleteTextChanges;

@end
