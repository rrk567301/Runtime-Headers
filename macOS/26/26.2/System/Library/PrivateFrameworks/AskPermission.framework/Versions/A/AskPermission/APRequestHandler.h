@interface APRequestHandler : NSObject

+ (void)getExceptionRequestWithDistributorIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)addExceptionRequestWithUUID:(id)a0 type:(long long)a1 bundleIdentifier:(id)a2 adamID:(id)a3 distributorID:(id)a4 ageRatingValue:(id)a5 withCompletion:(id /* block */)a6;
+ (void)addExceptionRequestWithUUID:(id)a0 type:(long long)a1 bundleIdentifier:(id)a2 withCompletion:(id /* block */)a3;
+ (void)addExceptionRequestWithUUID:(id)a0 type:(long long)a1 title:(id)a2 message:(id)a3 bundleIdentifier:(id)a4 adamID:(id)a5 distributorID:(id)a6 ageRatingValue:(id)a7 preApprove:(id)a8 postApprove:(id)a9 preDecline:(id)a10 postDecline:(id)a11 responseBundleIdentifier:(id)a12 metadata:(id)a13 withCompletion:(id /* block */)a14;
+ (void)addRequestWithURL:(id)a0 account:(id)a1 completion:(id /* block */)a2;
+ (void)checkDownloadQueueWithContentType:(long long)a0;
+ (void)clearExceptionRequestsWithCompletion:(id /* block */)a0;
+ (void)didReceiveStorePushNotificationWithPayload:(id)a0;
+ (void)getCachedRequestsWithCompletion:(id /* block */)a0;
+ (void)getExceptionRequestWithUniqueIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getExceptionRequestsWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getExceptionRequestsWithCompletion:(id /* block */)a0;
+ (void)getMatchingRequestsWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)getRequestWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)getRequestWithItemIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)localApproveExceptionWithUniqueIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)localApproveRequestWithItemIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)presentApprovalSheetWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)resetAccountWithType:(long long)a0;
+ (void)restartAPNSConnection;
+ (void)updateExceptionRequestWithUniqueIdentifier:(id)a0 action:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)updateRequestWithIdentifier:(id)a0 action:(long long)a1 completion:(id /* block */)a2;

@end
