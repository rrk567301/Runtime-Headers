@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property unsigned long long userPrivilege;
@property char requiresRemoteAccess;
@property char requiresCameraStreamingAccess;

+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(char)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(char)a2 requiresCameraStreamingAccess:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
