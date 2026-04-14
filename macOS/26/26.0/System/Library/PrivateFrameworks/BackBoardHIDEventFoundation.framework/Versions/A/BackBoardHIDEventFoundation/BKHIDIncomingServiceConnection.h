@class BSAuditToken, NSString, BKHIDDomainIncomingServiceConnection, NSObject;
@protocol _BKHIDIncomingServiceConnectionHandler, OS_os_log, BKHIDIncomingServiceConnectionDelegate;

@interface BKHIDIncomingServiceConnection : NSObject <BSDescriptionStreaming, BKHIDDomainIncomingServiceConnectionDelegate> {
    NSString *_debugMappedObjectName;
    NSObject<OS_os_log> *_log;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_wasHandled;
    id<BKHIDIncomingServiceConnectionDelegate> _lock_delegate;
    id<_BKHIDIncomingServiceConnectionHandler> _lock_handler;
}

@property (readonly, nonatomic) BKHIDDomainIncomingServiceConnection *domainIncomingServiceConnection;
@property (nonatomic) id<_BKHIDIncomingServiceConnectionHandler> handler;
@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (nonatomic) id<BKHIDIncomingServiceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)appendDescriptionToStream:(id)a0;
- (void)rejectConnection;
- (void).cxx_destruct;
- (void)acceptConnectionWithMappedObject:(id)a0;
- (void)incomingServiceConnectionDidRevoke:(id)a0;
- (id)initWithIncomingServiceConnection:(id)a0 debugMappedObjectName:(id)a1;

@end
