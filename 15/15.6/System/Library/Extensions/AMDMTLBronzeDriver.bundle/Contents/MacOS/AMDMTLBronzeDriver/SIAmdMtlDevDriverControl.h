@interface SIAmdMtlDevDriverControl : NSObject <RDSXPCControlProtocol> {
    struct AMDMtlDevDriver { struct Device { id x0; struct BronzeDeviceMembersRec *x1; } x0; struct os_unfair_lock_s { unsigned int x0; } x1; id x2; id x3; id x4; int x5; double x6; unsigned int x7; BOOL x8; } *devDriver;
}

- (id)init;
- (void)applicationWillTerminate:(id)a0;
- (void)setGPU:(id)a0 clockMode:(id)a1 withReply:(id /* block */)a2;

@end
