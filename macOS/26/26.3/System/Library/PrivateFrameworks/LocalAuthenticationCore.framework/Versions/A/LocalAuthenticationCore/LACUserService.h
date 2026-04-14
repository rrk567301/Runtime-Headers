@protocol LACUserServiceXPC;

@interface LACUserService : NSObject <LACUserService>

@property (nonatomic, readonly) id<LACUserServiceXPC> xpcController;

- (id)init;
- (void).cxx_destruct;

@end
