@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (id)createActionWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 fallbackToMissing:(char)a3 isForLocalization:(char)a4;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(char)a1;
- (id)createAllAvailableActions;
- (id)createAllAvailableActionsForLocalization;
- (id)createAllAvailableActionsIncludingMissingActions:(char)a0;

@end
