@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject {
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)sharedService;
+ (id)clientCallbackQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)shutdown;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (id)systemApplicationBundleIdentifier;
- (BOOL)isPasscodeLockedOrBlocked;
- (int)pidForApplication:(id)a0;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (void)sendActions:(id)a0 withResult:(id /* block */)a1;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (unsigned int)createClientPort;
- (void)cleanupClientPort:(unsigned int)a0;
- (id)processHandleForApplication:(id)a0;
- (id)badgeValueForBundleID:(id)a0;
- (void)setBadgeValue:(id)a0 forBundleID:(id)a1;
- (void)dataResetWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)reboot;
- (void)shutdownWithOptions:(id)a0;
- (void)setKeyboardFocusApplicationWithBundleID:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (void)setKeyboardFocusApplicationPID:(int)a0 deferringToken:(id)a1 completion:(id /* block */)a2;
- (void)setKeyboardFocusApplicationPID:(int)a0 completion:(id /* block */)a1;

@end
