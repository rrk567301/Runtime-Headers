@class _EXExtensionProcess, NSString, NSXPCConnection;

@interface LNExtensionMediator : NSObject <LNDaemonExtensionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)invalidate;
- (void)getConnectionHostInterfaceForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
