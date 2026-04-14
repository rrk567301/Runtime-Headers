@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AMActionSecAssess : NSObject

@property BOOL xprotectSucceeded;
@property (retain) NSObject<OS_dispatch_semaphore> *analyze_sem;

+ (BOOL)secAssessAction:(id)a0 withURL:(id)a1 error:(id *)a2;
+ (BOOL)currentProcessHasEntitlement:(id)a0 withValue:(const void *)a1;
+ (BOOL)actionIsThirdPartyWithURL:(id)a0;
+ (BOOL)updateUserApprovedQuarantineFlagForURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)malwareCheckEnded:(id)a0 result:(id)a1 forURL:(id)a2;
- (BOOL)_secAssessAction:(id)a0 withURL:(id)a1 error:(id *)a2;
- (BOOL)actionMeetsGatekeeperPolicy:(id)a0;
- (BOOL)isActionSignatureInvalid:(id)a0;
- (BOOL)isActionCodeSignedByApple:(id)a0;
- (BOOL)isQuarantined:(id)a0;

@end
