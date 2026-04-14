@protocol FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspace : FBSWorkspace

@property (readonly, nonatomic) id<FBSUIApplicationWorkspaceDelegate> delegate;

- (void)setDelegate:(id)a0;
- (id)initWithSerialQueue:(id)a0;

@end
