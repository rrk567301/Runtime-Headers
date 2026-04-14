@interface NEIPSecSAKernelSession : NEIPSecSASession {
    struct NEIPSecDB_s { } *_internalSession;
}

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setDelegateQueue:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)removeAllSAs;
- (BOOL)addLarvalSA:(id)a0;
- (BOOL)updateSA:(id)a0;
- (BOOL)addSA:(id)a0;
- (BOOL)removeSA:(id)a0;
- (BOOL)migrateSA:(id)a0;
- (void)startIdleTimeout:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (void)startBlackholeDetection:(unsigned int)a0 incomingSA:(id)a1 outgoingSA:(id)a2;
- (id)initWithName:(id)a0 delegate:(id)a1 pfkeySocket:(int)a2;

@end
