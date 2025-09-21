@class NSString, AFInstanceInfo;

@interface AFInstanceContext : NSObject

@property (readonly, copy, nonatomic) NSString *preferencesSubdomain;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *audioDeviceIdentifier;
@property (readonly, nonatomic) char supportsAudioPowerUpdate;
@property (readonly, nonatomic) char supportsProxyGroupPlayer;
@property (readonly, nonatomic) char supportsTelephony;
@property (readonly, nonatomic) AFInstanceInfo *info;
@property (readonly, nonatomic) char isDefault;
@property (readonly, nonatomic) char isCurrent;

+ (id)defaultContext;
+ (id)currentContext;
+ (id)effectiveMachServiceName:(id)a0;

- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCListenerWithMachServiceName:(id)a0;

@end
