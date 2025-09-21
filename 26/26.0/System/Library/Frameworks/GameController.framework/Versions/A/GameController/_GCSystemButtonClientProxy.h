@class _GCSystemButtonClientConnection, GCSystemButtonServer, NSString;

@interface _GCSystemButtonClientProxy : NSObject <_GCSystemButtonServerInterface> {
    GCSystemButtonServer *_server;
    _Atomic BOOL _invalid;
    _GCSystemButtonClientConnection *_connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    NSString *_wantsPressEventsReason;
    long long _wantsPressEventsAtPriority;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) BOOL wantsPressEvents;

- (long long)compareTo:(id)a0;
- (oneway void)refresh;
- (void)_invalidate;
- (id)init;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)handleButtonPress;
- (oneway void)setConsumesSystemButtonPressEvents:(BOOL)a0 reason:(id)a1 atMaximumPriority:(long long)a2;

@end
