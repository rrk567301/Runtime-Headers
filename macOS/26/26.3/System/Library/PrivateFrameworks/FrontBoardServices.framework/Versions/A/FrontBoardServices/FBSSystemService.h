@class FBSOpenApplicationService, FBSSystemAppProxy;

@interface FBSSystemService : NSObject {
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}

+ (id)sharedService;
+ (id)clientCallbackQueue;

- (void)shutdown;
- (BOOL)isPasscodeLockedOrBlocked;
- (id)_initWithEndpoint:(id)a0;
- (int)pidForApplication:(id)a0;
- (void)reboot;
- (void)setKeyboardFocusApplicationWithBundleID:(id)a0 pid:(int)a1 completion:(id /* block */)a2;
- (void)setKeyboardFocusApplicationPID:(int)a0 deferringToken:(id)a1 completion:(id /* block */)a2;
- (void)openURL:(id)a0 application:(id)a1 options:(id)a2 clientPort:(unsigned int)a3 withResult:(id /* block */)a4;
- (id)init;
- (id)badgeValueForBundleID:(id)a0;
- (id)systemApplicationBundleIdentifier;
- (unsigned int)createClientPort;
- (void)dataResetWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithEndpoint:(id)a0;
- (void)shutdownWithOptions:(id)a0;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void).cxx_destruct;
- (void)setKeyboardFocusApplicationPID:(int)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)sendActions:(id)a0 withResult:(id /* block */)a1;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)openApplication:(id)a0 options:(id)a1 withResult:(id /* block */)a2;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (id)processHandleForApplication:(id)a0;
- (void)cleanupClientPort:(unsigned int)a0;
- (void)terminateApplication:(id)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3 completion:(id /* block */)a4;
- (void)terminateApplicationGroup:(long long)a0 forReason:(long long)a1 andReport:(BOOL)a2 withDescription:(id)a3;
- (void)openApplication:(id)a0 options:(id)a1 clientPort:(unsigned int)a2 withResult:(id /* block */)a3;
- (void)setBadgeValue:(id)a0 forBundleID:(id)a1;

@end
