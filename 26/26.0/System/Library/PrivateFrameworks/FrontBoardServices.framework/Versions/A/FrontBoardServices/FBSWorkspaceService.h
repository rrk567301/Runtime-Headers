@class NSString;
@protocol FBSWorkspaceServiceTarget;

@interface FBSWorkspaceService : NSObject {
    id<FBSWorkspaceServiceTarget> _target;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)localServiceWithIdentifier:(id)a0;
+ (id)localService;

- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)sendActions:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)createScene:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)sendActions:(id)a0;
- (id)_initWithTarget:(id)a0 identifier:(id)a1;
- (id)createScene:(id /* block */)a0 completion:(id /* block */)a1;

@end
