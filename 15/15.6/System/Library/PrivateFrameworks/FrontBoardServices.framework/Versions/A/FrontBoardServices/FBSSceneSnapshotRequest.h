@class NSString, FBSSceneSettings;
@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding> {
    char _handled;
}

@property (copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) id<FBSSceneSnapshotRequestDelegate> delegate;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) char allowsProtectedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithSettings:(id)a0 allowsProtectedContent:(char)a1;
- (char)performSnapshotWithContext:(id)a0;

@end
