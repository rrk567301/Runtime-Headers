@class LACACMPoolInfo;

@interface LACACMPoolsInfo : NSObject

@property (readonly, nonatomic) LACACMPoolInfo *disposablePool;
@property (readonly, nonatomic) LACACMPoolInfo *nonDisposablePool;

- (void)_update;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
