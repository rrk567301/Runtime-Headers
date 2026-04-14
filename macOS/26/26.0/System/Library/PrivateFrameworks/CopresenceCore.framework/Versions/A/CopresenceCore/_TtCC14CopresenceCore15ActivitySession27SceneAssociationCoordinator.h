@interface _TtCC14CopresenceCore15ActivitySession27SceneAssociationCoordinator : NSObject <CPSceneObservationManagerDelegate> {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ sceneAssociationBehavior;
    void /* unknown type, empty encoding */ sceneObservationManager;
    void /* unknown type, empty encoding */ associatedScenesChanged;
    void /* unknown type, empty encoding */ didAssociateScene;
    void /* unknown type, empty encoding */ _associatedBranch;
    void /* unknown type, empty encoding */ systemAssociatedBranch;
    void /* unknown type, empty encoding */ groupActivityAssociations;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sceneWasDiscarded:(id)a0 branchIndex:(long long)a1;
- (void)scenesInBranchDidChangeWithBranchIndex:(long long)a0;

@end
