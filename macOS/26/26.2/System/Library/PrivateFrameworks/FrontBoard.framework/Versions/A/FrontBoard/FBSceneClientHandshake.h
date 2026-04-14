@class _FBSceneClientProcess, NSSet, RBSProcessHandle;

@interface FBSceneClientHandshake : NSObject

@property (readonly, nonatomic) _FBSceneClientProcess *process;
@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) NSSet *remnants;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithHandle:(id)a0 remnants:(id)a1;
- (id)init;

@end
