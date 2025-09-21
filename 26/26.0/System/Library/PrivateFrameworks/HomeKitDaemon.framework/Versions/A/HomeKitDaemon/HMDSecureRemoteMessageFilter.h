@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (id)logCategory;
+ (BOOL)isAllowedMessage:(id)a0;

- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (id)logIdentifier;

@end
