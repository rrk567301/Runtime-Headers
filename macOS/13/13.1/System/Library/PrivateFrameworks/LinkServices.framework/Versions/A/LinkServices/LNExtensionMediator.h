@class _EXExtensionProcess, NSString, NSXPCConnection;

@interface LNExtensionMediator : NSObject <LNDaemonExtensionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
