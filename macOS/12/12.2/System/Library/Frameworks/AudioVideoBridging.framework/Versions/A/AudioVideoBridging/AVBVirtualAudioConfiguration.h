@class AVBVirtualAudioConfigurationXPCDelegate, NSXPCConnection;

@interface AVBVirtualAudioConfiguration : NSObject {
    NSXPCConnection *_serverConnection;
    AVBVirtualAudioConfigurationXPCDelegate *_serverDelegate;
}

+ (id)sharedVirtualAudioConfiguration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)getBuiltinVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)getCustomVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)addBuiltinVirtualEntity:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeBuiltinVirtualEntity:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeCustomVirtualEntityWithUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)addCustomVirtualEntityWithUID:(id)a0 entityModel:(id)a1 onInterfaces:(id)a2 error:(id *)a3 completion:(id /* block */)a4;

@end
