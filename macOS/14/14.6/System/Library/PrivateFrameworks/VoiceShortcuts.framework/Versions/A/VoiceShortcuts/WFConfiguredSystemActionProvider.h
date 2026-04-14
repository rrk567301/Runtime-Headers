@interface WFConfiguredSystemActionProvider : NSObject

+ (id)sharedProvider;

- (id)availableActionTypes;
- (id)configuredStaccatoActionFromTemplate:(id)a0 valuesByParameterKey:(id)a1 error:(id *)a2;
- (id)configuredSystemActionForActionType:(id)a0;
- (id)defaultSystemActionForActionType:(id)a0;
- (id)linkActionWithStaccatoIdentifier:(id)a0;
- (BOOL)saveUpdatedAction:(id)a0 forActionType:(id)a1;

@end
