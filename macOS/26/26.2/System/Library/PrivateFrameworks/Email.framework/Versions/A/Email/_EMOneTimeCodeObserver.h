@class NSString, EFManualCancelationToken;
@protocol EMOneTimeCodeObserver_xpc;

@interface _EMOneTimeCodeObserver : NSObject <EMRecoverableObserver> {
    id<EMOneTimeCodeObserver_xpc> _observer;
    EFManualCancelationToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_performWithRemoteConnection:(id)a0 forRecovery:(BOOL)a1;
- (void)performWithRemoteConnection:(id)a0;
- (void)recoverWithRemoteConnection:(id)a0;

@end
