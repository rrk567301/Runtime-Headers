@class SFAuthenticationManager, NSString, NSMapTable, NSObject;
@protocol LACSharingManagerDelegate, OS_dispatch_queue;

@interface LACSharingManager : NSObject <SFAuthenticationManagerDelegate, LACSharingManaging> {
    NSMapTable *_canAuthenticateSessions;
    SFAuthenticationManager *_sharingManager;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LACSharingManagerDelegate> delegate;

+ (BOOL)isSharingError:(id)a0;

- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteAuthenticationForSessionWithID:(id)a1;
- (void)manager:(id)a0 didFailAuthenticationForSessionWithID:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didStartAuthenticationForSessionWithID:(id)a1;
- (id)initWithReplyQueue:(id)a0;
- (id)authenticateWithRequest:(id)a0;
- (void)_authenticateWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_authenticationBackgroundTaskForRequest:(id)a0;
- (unsigned long long)_authenticationTypeForCompanion:(long long)a0;
- (id)_canAuthenticateBackgroundTaskWithCompanion:(long long)a0;
- (void)_canAuthenticateWithCompanion:(long long)a0 completion:(id /* block */)a1;
- (void)_failSessionWithID:(id)a0 error:(id)a1;
- (unsigned long long)_pairedDeviceTypeForCompanion:(long long)a0;
- (void)_pairedDevicesForCompanion:(long long)a0 completion:(id /* block */)a1;
- (void)_runPairedDevicesBackgroundTaskForCompanion:(long long)a0 completion:(id /* block */)a1;
- (void)canAuthenticateWithCompanion:(long long)a0 completion:(id /* block */)a1;
- (void)cancelSessionWithID:(id)a0;
- (id)getPairedDevicesBackgroundTaskForCompanion:(long long)a0;
- (void)pairedDevicesForCompanion:(long long)a0 completion:(id /* block */)a1;

@end
