@interface _TtCC18CompositorServices9CLIServer7Session : _TtCs12_SwiftObject <CompositorServices.CLIServerXPCProtocol> {
    void /* unknown type, empty encoding */ clientService;
}

- (void)dumpFramesWithReply:(id /* block */)a0;
- (void)recordWithStart:(BOOL)a0 reply:(id /* block */)a1;
- (void)stallWithStart:(BOOL)a0 reply:(id /* block */)a1;

@end
