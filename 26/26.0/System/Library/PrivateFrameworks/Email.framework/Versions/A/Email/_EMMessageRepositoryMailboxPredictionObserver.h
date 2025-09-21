@class NSArray, NSString, EFManualCancelationToken;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver>

@property (readonly, copy, nonatomic) NSArray *messageObjectIDs;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) EFManualCancelationToken *cancelationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (void)mailboxWasPredicted:(id)a0;
- (void)_performWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (id)initWithMessageObjectIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithRemoteConnection:(id)a0;
- (void)recoverWithRemoteConnection:(id)a0;

@end
