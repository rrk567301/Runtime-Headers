@class LACACMPoolInfo;

@interface LACACMPoolsInfo : NSObject

@property (readonly, nonatomic) LACACMPoolInfo *disposablePool;
@property (readonly, nonatomic) LACACMPoolInfo *nonDisposablePool;

- (void)_update;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
