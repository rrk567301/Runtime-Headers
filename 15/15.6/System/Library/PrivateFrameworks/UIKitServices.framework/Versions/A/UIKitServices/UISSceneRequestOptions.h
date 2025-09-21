@class NSString, NSSet, BSProcessHandle, UISScenePlacementConfiguration;

@interface UISSceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding>

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSSet *actions;
@property (nonatomic) long long sceneRequestIntent;
@property (nonatomic) char requestQuickLookScene;
@property (retain, nonatomic) UISScenePlacementConfiguration *scenePlacementConfiguration;
@property (nonatomic) long long sceneCollectionJoinBehavior;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (nonatomic) char requestFullscreen;
@property (nonatomic) char requestBackground;
@property (nonatomic) char preserveLayout;
@property (nonatomic) char requestCenterSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

@end
