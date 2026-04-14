@protocol LACUserServiceXPC;

@interface LACUserService : NSObject <LACUserService>

@property (nonatomic, readonly) id<LACUserServiceXPC> xpcController;

- (void).cxx_destruct;
- (id)init;

@end
