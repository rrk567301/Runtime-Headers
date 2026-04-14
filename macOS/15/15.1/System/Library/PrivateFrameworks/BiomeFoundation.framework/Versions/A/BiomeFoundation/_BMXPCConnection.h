@class _BMXPCTransport;

@interface _BMXPCConnection : NSXPCConnection {
    _BMXPCTransport *_transport;
}

- (void).cxx_destruct;
- (void)_setTargetUserIdentifier:(unsigned int)a0;
- (id)_initWithConnection:(id)a0 queue:(id)a1;
- (id)bm_transport;

@end
