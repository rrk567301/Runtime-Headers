@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AMActionSecAssess : NSObject

@property char xprotectSucceeded;
@property (retain) NSObject<OS_dispatch_semaphore> *analyze_sem;

+ (char)actionIsThirdPartyWithURL:(id)a0;
+ (char)currentProcessHasEntitlement:(id)a0 withValue:(const void *)a1;
+ (char)secAssessAction:(id)a0 withURL:(id)a1 error:(id *)a2;
+ (char)secAssessWorkflowAtURL:(id)a0 error:(id *)a1;
+ (char)updateUserApprovedQuarantineFlagForURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)_secAssessAction:(id)a0 withURL:(id)a1 error:(id *)a2;
- (char)_secAssessWorkflowAtURL:(id)a0 error:(id *)a1;
- (char)actionMeetsGatekeeperPolicy:(id)a0;
- (char)isActionCodeSignedByApple:(id)a0;
- (char)isActionSignatureInvalid:(id)a0;
- (char)isQuarantined:(id)a0;
- (void)malwareCheckEnded:(id)a0 result:(id)a1 forURL:(id)a2;

@end
