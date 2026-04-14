@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (id)preferencesSubdomain;
- (BOOL)supportsTelephony;
- (BOOL)isDefault;
- (BOOL)supportsProxyGroupPlayer;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)audioDeviceIdentifier;
- (BOOL)isCurrent;
- (BOOL)supportsAudioPowerUpdate;
- (void).cxx_destruct;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (id)mediaRouteIdentifier;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (id)info;

@end
