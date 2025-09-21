@interface NEIPSecSAKernelSession : NEIPSecSASession {
    struct NEIPSecDB_s { } *_internalSession;
}

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setDelegateQueue:(id)a0;
- (char)addLarvalSA:(id)a0;
- (char)addSA:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (id)initWithName:(id)a0 delegate:(id)a1 pfkeySocket:(int)a2;
- (char)migrateSA:(id)a0;
- (void)removeAllSAs;
- (char)removeSA:(id)a0;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (char)updateSA:(id)a0;

@end
