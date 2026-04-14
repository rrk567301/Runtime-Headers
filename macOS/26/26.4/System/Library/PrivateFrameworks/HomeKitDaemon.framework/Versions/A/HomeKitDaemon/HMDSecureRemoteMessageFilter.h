@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (BOOL)isAllowedMessage:(id)a0;
+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;

@end
