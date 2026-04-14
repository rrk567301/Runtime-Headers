@class SCEventConnection;
@protocol SCHotKeyListenerDelegate;

@interface SCHotKeyListener : NSObject {
    SCEventConnection *_connection;
    id<SCHotKeyListenerDelegate> _delegate;
}

- (void)startListening;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)callDelegateWithEvent:(unsigned long long)a0;

@end
