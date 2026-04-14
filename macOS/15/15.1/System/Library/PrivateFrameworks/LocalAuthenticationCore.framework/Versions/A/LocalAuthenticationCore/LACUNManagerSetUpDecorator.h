@class NSString;
@protocol LACUNManagerDelegate, LACSetUpStateProvider, LACUNManager;

@interface LACUNManagerSetUpDecorator : NSObject <LACUNManager> {
    id /* block */ _responderBuilder;
    id<LACUNManager> _responder;
    id<LACSetUpStateProvider> _setupStateProvider;
    id<LACUNManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<LACUNManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)responder;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 scheduledOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithManagerBuilder:(id /* block */)a0;
- (id)initWithManagerBuilder:(id /* block */)a0 setupStateProvider:(id)a1;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
