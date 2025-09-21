@class NSString;

@interface BRCUserNotificationRequestAccessRequestID : BRCUserNotificationRequestAccess <LSOpenResourceOperationDelegate, BRCUserNotificationRequestID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestTypeName;
+ (id)decodeWithRequestIDString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)encode;
- (id)requestCategory;
- (void)_approveRequester:(id)a0 share:(id)a1 sessionContext:(id)a2 completionHandler:(id /* block */)a3;
- (id)_createCKFetchRecordsOperationForShareRecordID:(id)a0 originalRequest:(id)a1 sessionContext:(id)a2 perRecordCompletionBlock:(id /* block */)a3;
- (id)_getRequesterForUserRecordName:(id)a0 requesters:(id)a1;
- (void)_perfromActionWithIdentifier:(id)a0 share:(id)a1 sessionContext:(id)a2 requesterToModify:(id)a3;
- (void)_saveShareOperationForShare:(id)a0 sessionContext:(id)a1;
- (void)_sendUserAlertWithError:(id)a0 type:(id)a1;
- (void)performOnActionWithNotificationResponse:(id)a0 sessionContext:(id)a1 completionHandler:(id /* block */)a2;

@end
