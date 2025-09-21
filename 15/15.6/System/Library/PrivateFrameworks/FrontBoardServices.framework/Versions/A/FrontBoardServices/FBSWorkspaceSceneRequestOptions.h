@class NSString, FBSSceneTransitionContext, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>

@property (nonatomic, getter=isClientFuture) char clientFuture;
@property (copy, nonatomic) NSString *workspaceIdentifier;
@property (retain, nonatomic) FBSSceneSettings *initialSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (nonatomic, getter=isKeyboardScene) char keyboardScene;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) FBSSceneSpecification *specification;
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;

@end
