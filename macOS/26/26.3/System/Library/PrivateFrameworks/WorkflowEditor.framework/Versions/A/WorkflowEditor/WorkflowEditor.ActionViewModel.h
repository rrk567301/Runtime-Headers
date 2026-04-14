@interface WorkflowEditor.ActionViewModel : NSObject <WFActionEventObserver, WFParameterEventObserver, WFHomeManagerEventObserver> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ onChange;
    void /* unknown type, empty encoding */ observingParameters;
    void /* unknown type, empty encoding */ visibleParameters;
    void /* unknown type, empty encoding */ parameterSummary;
    void /* unknown type, empty encoding */ parameterSummaryCoordinator;
    void /* unknown type, empty encoding */ additionalParameterSummaries;
    void /* unknown type, empty encoding */ additionalParameterSummaryCoordinators;
    void /* unknown type, empty encoding */ showMoreParameters;
    void /* unknown type, empty encoding */ isFavorite;
    void /* unknown type, empty encoding */ requiresHomeUpdate;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ showOutput;
    void /* unknown type, empty encoding */ resourceError;
    void /* unknown type, empty encoding */ accessResourcesThatCanLogOut;
    void /* unknown type, empty encoding */ accessResourcesAllowingMultipleAccounts;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)actionIconDidChange:(id)a0;
- (void)actionNameDidChange:(id)a0;
- (void)actionOutputDetailsDidChange:(id)a0;
- (void)actionReloadAuxiliaryButton:(id)a0;
- (void)actionVisibleParametersDidChange:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)favoritesDidChange:(id)a0;
- (void)pasteboardDidChange;
- (void)resourcesDidChange:(id)a0;
- (void)updateHomeMigrationRequirement;

@end
