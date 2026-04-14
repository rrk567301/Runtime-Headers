@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {
    RBSAssertion *_assertion;
    NSString *_description;
}

@property (readonly, nonatomic) NSString *sceneID;

- (id)initWithScene:(id)a0 requests:(id)a1 expirationInterval:(double)a2 responseHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
