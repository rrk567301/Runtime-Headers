@class HMDHome, NSUUID;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying> {
    NSUUID *_homeUUID;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long userPrivilege;
@property (readonly) BOOL requiresRemoteAccess;
@property (readonly) BOOL requiresCameraStreamingAccess;

+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)__initWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

@end
