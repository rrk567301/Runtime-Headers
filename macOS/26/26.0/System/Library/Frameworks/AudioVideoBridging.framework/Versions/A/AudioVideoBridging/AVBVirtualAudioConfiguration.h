@class AVBVirtualAudioConfigurationXPCDelegate, NSMutableDictionary, NSXPCConnection;

@interface AVBVirtualAudioConfiguration : NSObject {
    NSXPCConnection *_serverConnection;
    AVBVirtualAudioConfigurationXPCDelegate *_serverDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _builtinVirtualLock;
    NSMutableDictionary *_builtinVirtualEntities;
    NSMutableDictionary *_builtinVirtualEntitiesAcquired;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _customVirtualLock;
    NSMutableDictionary *_customVirtualEntities;
}

+ (id)sharedVirtualAudioConfiguration;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isBuiltinVirtualEntityAcquired:(unsigned long long)a0;
- (void)_acquiredVirtualEntity:(BOOL)a0 entityID:(unsigned long long)a1;
- (void)_addedBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1 entityID:(unsigned long long)a2;
- (void)_addedCustomVirtualEntityWithUID:(id)a0 entityID:(unsigned long long)a1;
- (void)_removedBuiltinVirtualEntity:(id)a0;
- (void)_removedCustomVirtualEntityWithUID:(id)a0;
- (BOOL)addBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1 error:(id *)a2 completion:(id /* block */)a3;
- (BOOL)addCustomVirtualEntityWithUID:(id)a0 entityModel:(id)a1 onInterfaces:(id)a2 error:(id *)a3 completion:(id /* block */)a4;
- (BOOL)getBuiltinVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)getCustomVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)isBuiltinVirtualEntity:(unsigned long long)a0;
- (BOOL)isCustomVirtualEntity:(unsigned long long)a0;
- (BOOL)removeBuiltinVirtualEntity:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeCustomVirtualEntityWithUID:(id)a0 completion:(id /* block */)a1;
- (void)removeVirtualEntity:(unsigned long long)a0;

@end
