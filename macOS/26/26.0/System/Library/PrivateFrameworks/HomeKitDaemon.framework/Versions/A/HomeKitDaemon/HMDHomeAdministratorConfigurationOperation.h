@class HMFMessageDispatcher, NSString, HMDHome, HMFMessage;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMFMessage *message;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (getter=isMessageResponseHandled) BOOL messageResponseHandled;
@property BOOL shouldSuspendSyncing;
@property (copy) id /* block */ sendCompletionBlock;
@property (copy) id /* block */ responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (double)timeout;

- (void)main;
- (void)cancelWithError:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_respondWithError:(id)a0 payload:(id)a1;
- (id)initWithMessage:(id)a0 home:(id)a1 dispatcher:(id)a2;

@end
