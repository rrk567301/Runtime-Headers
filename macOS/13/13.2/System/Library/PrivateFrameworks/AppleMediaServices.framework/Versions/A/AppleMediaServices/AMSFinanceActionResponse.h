@class AMSURLTaskInfo, NSString, NSURL, ACAccount;

@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable>

@property (retain) ACAccount *account;
@property (retain) NSString *creditString;
@property long long kind;
@property BOOL shouldRetry;
@property (retain) AMSURLTaskInfo *taskInfo;
@property BOOL tidContinue;
@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithActionDictionary:(id)a0 taskInfo:(id)a1;
+ (id)actionWithUpdatedCreditString:(id)a0 account:(id)a1 taskInfo:(id)a2;
+ (void)handleExternalGotoURL:(id)a0;
+ (void)handleExternalGotoURL:(id)a0 taskInfo:(id)a1;
+ (id)handleGotoURL:(id)a0 taskInfo:(id)a1 gotoType:(long long)a2 accountURL:(BOOL)a3 tidContinue:(BOOL)a4 retryOnSuccess:(BOOL)a5;
+ (id)_bodyObjectFromRequest:(id)a0;
+ (id)_presentEngagementForURL:(id)a0 taskInfo:(id)a1;
+ (BOOL)_stashTIDContinueHeadersForTaskInfo:(id)a0;
+ (id)_deepLinkForURL:(id)a0 taskInfo:(id)a1 gotoType:(long long)a2 isAccountURL:(BOOL)a3 tidContinue:(BOOL)a4;
+ (BOOL)_isModernURL:(id)a0 taskInfo:(id)a1;
+ (id)_URLForCommerceUIFromURL:(id)a0 taskInfo:(id)a1 tidContinue:(BOOL)a2;

- (void).cxx_destruct;
- (id)performWithTaskInfo:(id)a0;
- (id)initWithTaskInfo:(id)a0;
- (id)_performCreditDisplayUpdate;
- (id)_performGotoURL;
- (id)_performOpenStandardURL;
- (id)_handleGotoAction;

@end
