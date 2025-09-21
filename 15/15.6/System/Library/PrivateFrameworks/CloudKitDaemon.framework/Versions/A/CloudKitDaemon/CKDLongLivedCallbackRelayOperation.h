@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (readonly, nonatomic, getter=isInvalidated) char invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (char)isLongLivedCallbackRelayOperation;
- (void)operationWithID:(id)a0 receivedCallback:(id)a1;
- (char)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)a0;

@end
