@class FBSSceneTransitionContext, FBSSceneSpecification, NSString, FBSMutableSceneParameters, FBSSceneIdentity;

@interface FBSClientSceneFutureDefinition : NSObject <FBSSceneCreating>

@property (readonly, nonatomic) FBSSceneIdentity *identity;
@property (retain, nonatomic) FBSSceneSpecification *specification;
@property (retain, nonatomic) FBSMutableSceneParameters *parameters;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (id)initWithWorkspaceID:(id)a0;
- (void)configureParameters:(id /* block */)a0;
- (void)configureTransition:(id /* block */)a0;

@end
