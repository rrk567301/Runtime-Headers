@class AVBVirtualAudioConfigurationXPCDelegate, NSXPCConnection;

@interface AVBVirtualAudioConfiguration : NSObject {
    NSXPCConnection *_serverConnection;
    AVBVirtualAudioConfigurationXPCDelegate *_serverDelegate;
}

+ (id)sharedVirtualAudioConfiguration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (char)addBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1 error:(id *)a2 completion:(id /* block */)a3;
- (char)addCustomVirtualEntityWithUID:(id)a0 entityModel:(id)a1 onInterfaces:(id)a2 error:(id *)a3 completion:(id /* block */)a4;
- (char)getBuiltinVirtualAudioEntityList:(id /* block */)a0;
- (char)getCustomVirtualAudioEntityList:(id /* block */)a0;
- (char)removeBuiltinVirtualEntity:(id)a0 completion:(id /* block */)a1;
- (char)removeCustomVirtualEntityWithUID:(id)a0 completion:(id /* block */)a1;

@end
