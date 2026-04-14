@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)mediaRouteIdentifier;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (BOOL)supportsProxyGroupPlayer;
- (BOOL)isDefault;
- (id)preferencesSubdomain;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)supportsAudioPowerUpdate;
- (id)description;
- (id)audioDeviceIdentifier;
- (id)info;
- (BOOL)supportsTelephony;
- (id)init;
- (BOOL)isCurrent;
- (id)createXPCListenerWithMachServiceName:(id)a0;

@end
