@class NSString, EFCancelationToken;
@protocol EMOneTimeCodeObserver_xpc;

@interface _EMOneTimeCodeObserver : NSObject <EMRecoverableObserver> {
    id<EMOneTimeCodeObserver_xpc> _observer;
    EFCancelationToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithObserver:(id)a0;
- (void)_performWithRemoteConnection:(id)a0 forRecovery:(char)a1;
- (void)performWithRemoteConnection:(id)a0;
- (void)recoverWithRemoteConnection:(id)a0;

@end
