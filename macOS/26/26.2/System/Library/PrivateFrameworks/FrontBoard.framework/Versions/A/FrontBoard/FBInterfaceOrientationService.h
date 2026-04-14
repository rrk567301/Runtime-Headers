@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject {
    FBInterfaceOrientationServiceServer *_server;
}

@property (readonly, nonatomic) long long interfaceOrientation;

+ (id)sharedInstance;

- (void)initialize;
- (void)setInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startService;
- (void)setInterfaceOrientation:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;

@end
