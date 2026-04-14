@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (BOOL)isCurrent;
- (BOOL)supportsAudioPowerUpdate;
- (id)info;
- (id)description;
- (id)init;
- (id)mediaRouteIdentifier;
- (BOOL)supportsTelephony;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)preferencesSubdomain;
- (id)audioDeviceIdentifier;
- (BOOL)supportsProxyGroupPlayer;
- (BOOL)isDefault;

@end
