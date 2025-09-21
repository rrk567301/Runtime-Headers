@class NSUUID, HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property (readonly) NSUUID *homeUUID;
@property unsigned long long userPrivilege;
@property char requiresRemoteAccess;
@property char requiresCameraStreamingAccess;
@property char useProofOfLocality;
@property (readonly, weak) HMDHome *home;
@property (readonly) char validForAnyHomeTheUserIsPartOf;

+ (id)userMessagePolicyUsingProofOfLocalityForHome:(id)a0 userPrivilege:(unsigned long long)a1;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(char)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(char)a2 requiresCameraStreamingAccess:(char)a3;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(char)a2 requiresCameraStreamingAccess:(char)a3 useProofOfLocality:(char)a4;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)a0 remoteAccessRequired:(char)a1;
+ (id)userMessagePolicyWithUserPrivilege:(unsigned long long)a0 remoteAccessRequired:(char)a1 requiresCameraStreamingAccess:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)__initWithHome:(id)a0 homeUUID:(id)a1 userPrivilege:(unsigned long long)a2 remoteAccessRequired:(char)a3 requiresCameraStreamingAccess:(char)a4 useProofOfLocality:(char)a5;

@end
