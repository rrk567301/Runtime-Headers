@class NSString;

@interface FAAOSUISoftLinking : NSObject

@property (readonly, copy, nonatomic) NSString *webViewInvitationsUIWrapper;
@property (readonly, copy, nonatomic) NSString *webViewTransferRequestsUIWrapper;

- (id)iCloudURLRequestForKey:(id)a0 method:(id)a1 accountID:(id)a2 error:(id *)a3;
- (id)makeWebViewWithURL:(id)a0 account:(id)a1 delegate:(id)a2;
- (id)makeiCloudRequesterWithRequest:(id)a0 signForAccountID:(id)a1 handler:(id /* block */)a2;
- (void)updateURL:(id)a0 onViewController:(id)a1;

@end
