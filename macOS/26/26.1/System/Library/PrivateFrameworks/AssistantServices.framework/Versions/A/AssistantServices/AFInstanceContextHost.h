@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (id)mediaRouteIdentifier;
- (BOOL)isDefault;
- (id)preferencesSubdomain;
- (id)audioDeviceIdentifier;
- (id)info;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (BOOL)supportsTelephony;
- (BOOL)isCurrent;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)description;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsAudioPowerUpdate;
- (BOOL)supportsProxyGroupPlayer;
- (id)init;

@end
