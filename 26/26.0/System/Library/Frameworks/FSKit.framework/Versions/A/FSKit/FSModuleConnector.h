@class NSXPCConnection, NSString, FSModuleExtension;

@interface FSModuleConnector : NSObject <FSModuleXPC, FSModuleProjectOperations>

@property (retain) FSModuleExtension *ourModule;
@property (retain) NSXPCConnection *ourConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ping:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getVolumeEndpoint:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendTaskUpdate:(id)a0;
- (void)activateVolume:(id)a0 resource:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)checkIn:(id)a0 replyHandler:(id /* block */)a1;
- (void)checkWithOptions:(id)a0 connection:(id)a1 taskID:(id)a2 replyHandler:(id /* block */)a3;
- (void)deactivateVolume:(id)a0 numericOptions:(unsigned long long)a1 replyHandler:(id /* block */)a2;
- (void)formatWithOptions:(id)a0 connection:(id)a1 taskID:(id)a2 replyHandler:(id /* block */)a3;
- (void)getLegacyVolumeEndpoint:(id)a0 replyHandler:(id /* block */)a1;
- (void)getModuleListenerEndpoint:(id /* block */)a0;
- (void)loadResource:(id)a0 options:(id)a1 replyHandler:(id /* block */)a2;
- (void)probeResource:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendCloseResource:(id)a0;
- (void)sendConfigureUserClient:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendIsVolumeUsed:(id)a0 bundle:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendRevokeResource:(id)a0;
- (void)sendWipeResource:(id)a0 replyHandler:(id /* block */)a1;
- (void)unloadResource:(id)a0 options:(id)a1 replyHandler:(id /* block */)a2;

@end
