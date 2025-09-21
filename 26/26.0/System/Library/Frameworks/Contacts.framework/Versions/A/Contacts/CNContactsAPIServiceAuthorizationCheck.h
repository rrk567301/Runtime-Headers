@class NSString, NSObject;
@protocol OS_os_log, CNTCC;

@interface CNContactsAPIServiceAuthorizationCheck : NSObject <CNContactsAPIServiceAuthorizationCheck>

@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) id<CNTCC> tccServices;
@property BOOL requireTCCApprovalForContactProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
