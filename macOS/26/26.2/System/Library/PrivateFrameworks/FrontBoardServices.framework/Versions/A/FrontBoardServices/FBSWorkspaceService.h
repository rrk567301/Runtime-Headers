@class NSString;
@protocol FBSWorkspaceServiceTarget;

@interface FBSWorkspaceService : NSObject {
    id<FBSWorkspaceServiceTarget> _target;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)localServiceWithIdentifier:(id)a0;
+ (id)localService;

- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)sendActions:(id)a0;
- (void)sendActions:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (id)createScene:(id /* block */)a0;
- (id)init;
- (id)_initWithTarget:(id)a0 identifier:(id)a1;
- (id)createScene:(id /* block */)a0 completion:(id /* block */)a1;

@end
