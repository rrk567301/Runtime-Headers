@class LACACMPoolInfo;

@interface LACACMPoolsInfo : NSObject

@property (readonly, nonatomic) LACACMPoolInfo *disposablePool;
@property (readonly, nonatomic) LACACMPoolInfo *nonDisposablePool;

- (void)_update;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
