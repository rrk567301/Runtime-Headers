@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (long long)filterMessage:(id)a0 withPolicies:(id)a1 error:(id *)a2;
+ (BOOL)areWeGoingToRejectMessage:(id)a0 basedOnRemoteAccessPolicy:(id)a1 forUser:(id)a2;


@end
