@class NSString, AXDispatchTimer;

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate> {
    AXDispatchTimer *_resolveTimer;
    struct __CFSocket { } *_ipv4socket;
    struct __CFSocket { } *_ipv6socket;
    BOOL _isVisible;
}

@property (copy, nonatomic) id /* block */ searchCompletion;
@property (retain, nonatomic) NSString *serviceType;
@property (nonatomic) double searchTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)initialize;
- (void).cxx_destruct;
- (void)netServiceWillPublish:(id)a0;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (BOOL)isVisible;
- (BOOL)setVisible:(BOOL)a0;
- (void)netServiceDidPublish:(id)a0;
- (void)resetConnection;
- (void)receivedData:(id)a0;
- (id)initWithServiceType:(id)a0;
- (void)acceptConnection:(int)a0;
- (void)closeConnectionWithError:(id)a0;
- (BOOL)shouldAcceptConnection;
- (void)resolveMasterWithCompletion:(id /* block */)a0;
- (BOOL)isSlave;

@end
