@class NSString, CATTransport;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate>

@property (readonly, nonatomic) CATTransport *transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transportDidInvalidate:(id)a0;
- (id)initWithTransport:(id)a0;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
