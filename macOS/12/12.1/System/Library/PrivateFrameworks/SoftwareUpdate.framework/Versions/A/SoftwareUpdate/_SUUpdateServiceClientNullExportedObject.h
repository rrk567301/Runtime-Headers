@class NSString;

@interface _SUUpdateServiceClientNullExportedObject : NSObject <SUUpdateClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)catalogURLDidChange;
- (void)installedBundlesToRegisterWithLaunchServices:(id)a0 completion:(id /* block */)a1;
- (void)availableUpdatesDidChange;
- (void)updatesQueuedForLaterDidChange;
- (void)authChallengeWasReceived:(id)a0 handled:(BOOL *)a1;
- (void)installStateDidChange:(id)a0 forUpdateWithProductKey:(id)a1;

@end
