@class SCEventConnection;
@protocol SCHotKeyListenerDelegate;

@interface SCHotKeyListener : NSObject {
    SCEventConnection *_connection;
    id<SCHotKeyListenerDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)startListening;
- (void).cxx_destruct;
- (void)callDelegateWithEvent:(unsigned long long)a0;

@end
