@class NSString, BSServiceListenerConnection, NSObject;
@protocol OS_os_log, _BKHIDDomainIncomingServiceConnectionHandler, BSInvalidatable, BKHIDDomainIncomingServiceConnectionDelegate;

@interface BKHIDDomainIncomingServiceConnection : NSObject <BSServiceListenerConnectionEventObserver, BSDescriptionStreaming> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSInvalidatable> _lock_eventObserver;
    BOOL _lock_wasHandled;
    id<BKHIDDomainIncomingServiceConnectionDelegate> _lock_delegate;
    id<_BKHIDDomainIncomingServiceConnectionHandler> _lock_handler;
}

@property (nonatomic) id<_BKHIDDomainIncomingServiceConnectionHandler> handler;
@property (readonly, nonatomic) BSServiceListenerConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) id<BKHIDDomainIncomingServiceConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isRevoked) BOOL revoked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptConnection;
- (void)dealloc;
- (void)appendDescriptionToStream:(id)a0;
- (void)rejectConnection;
- (void).cxx_destruct;
- (void)connection:(id)a0 revokedWithEvent:(id)a1;
- (id)initWithConnection:(id)a0 log:(id)a1;

@end
