@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject {
    FBInterfaceOrientationServiceServer *_server;
}

@property (readonly, nonatomic) long long interfaceOrientation;

+ (id)sharedInstance;

- (void)initialize;
- (id)init;
- (void)setInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)startService;
- (void)setInterfaceOrientation:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;

@end
