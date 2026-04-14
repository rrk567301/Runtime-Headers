@class NSPointerArray, AVBVirtualAudioConfiguration;

@interface AVBVirtualAudioConfigurationXPCDelegate : NSObject <AVBAudioConfigurationClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    NSPointerArray *_clients;
}

@property (weak, nonatomic) AVBVirtualAudioConfiguration *configuration;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addedBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1 entityID:(unsigned long long)a2;
- (void)addedCustomVirtualEntityWithUID:(id)a0 entityID:(unsigned long long)a1;
- (void)builtinVirtualEntity:(id)a0 entityID:(unsigned long long)a1 acquired:(BOOL)a2;
- (void)removedBuiltinVirtualEntity:(id)a0;
- (void)removedCustomVirtualEntityWithUID:(id)a0;

@end
