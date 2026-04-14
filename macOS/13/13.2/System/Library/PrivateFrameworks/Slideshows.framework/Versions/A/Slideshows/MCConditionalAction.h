@class NSString, MCAction;

@interface MCConditionalAction : MCAction

@property (copy) NSString *predicate;
@property (retain) MCAction *actionIfTrue;
@property (retain) MCAction *actionIfFalse;

+ (id)conditionalActionWithPredicate:(id)a0;
+ (id)conditionalActionWithPredicate:(id)a0 actionIfTrue:(id)a1 actionIfFalse:(id)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;
- (id)setTransitionForTargetPlugObjectID:(id)a0 withTransitionID:(id)a1 forCondition:(BOOL)a2;
- (id)setAnimationTriggerForTargetPlugObjectID:(id)a0 withAnimationKey:(id)a1 forCondition:(BOOL)a2;
- (id)setGenericActionForTargetPlugObjectID:(id)a0 withAttributes:(id)a1 forCondition:(BOOL)a2;
- (id)setActionGroupForCondition:(BOOL)a0;
- (id)setConditionalActionWithPredicate:(id)a0 forCondition:(BOOL)a1;

@end
