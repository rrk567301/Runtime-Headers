@interface APRequestHandler : NSObject

+ (void)addRequestWithURL:(id)a0 account:(id)a1 completion:(id /* block */)a2;
+ (void)localApproveRequestWithItemIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)updateRequestWithIdentifier:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
+ (void)resetAccountWithType:(long long)a0;
+ (void)didReceiveStorePushNotificationWithPayload:(id)a0;
+ (void)presentApprovalSheetWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)checkDownloadQueueWithContentType:(long long)a0;
+ (void)getCachedRequestsWithCompletion:(id /* block */)a0;

@end
