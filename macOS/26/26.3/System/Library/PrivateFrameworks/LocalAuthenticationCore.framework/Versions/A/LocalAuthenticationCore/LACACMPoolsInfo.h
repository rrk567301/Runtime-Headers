@class LACACMPoolInfo;

@interface LACACMPoolsInfo : NSObject

@property (readonly, nonatomic) LACACMPoolInfo *disposablePool;
@property (readonly, nonatomic) LACACMPoolInfo *nonDisposablePool;

- (void)_update;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
