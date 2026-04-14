@class NSObject;
@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (BOOL)_disconnect;
- (void)_requestExpireStateWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)requestExpireStateForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)_disconnected;
- (id)init;
- (void)_requestRoutingWithGUID:(id)a0 chatGUID:(id)a1 downgradableServices:(id)a2 error:(unsigned int)a3 handler:(id /* block */)a4;
- (void)requestRoutingForMessageGuid:(id)a0 inChat:(id)a1 downgradableServices:(id)a2 error:(unsigned int)a3 completionBlock:(id /* block */)a4;
- (void)requestScheduledMessagesWithCompletion:(id /* block */)a0;
- (void)requestWatchdogForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestWatchdogWithCompletion:(id /* block */)a0;
- (void)requestRoutingWithDowngradableServices:(id)a0 completion:(id /* block */)a1;
- (BOOL)_connect;
- (void)requestExpireStateWithCompletion:(id /* block */)a0;
- (void)_requestWatchdogWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)_requestScheduleMessagesWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)requestScheduledMessageForGuid:(id)a0 completionBlock:(id /* block */)a1;

@end
