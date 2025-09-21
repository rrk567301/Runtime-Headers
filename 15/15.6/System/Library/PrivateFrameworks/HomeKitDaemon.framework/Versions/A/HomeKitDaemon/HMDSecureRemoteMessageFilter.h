@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (id)logCategory;
+ (char)isAllowedMessage:(id)a0;

- (id)logIdentifier;
- (char)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;

@end
