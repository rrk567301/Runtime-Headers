@interface RecvList : NSObject {
    struct __CFArray { } *waits;
}

- (void)remove:(struct receive_wait_s { BOOL x0; id x1; id *x2; id x3; id x4; } *)a0;
- (void)add:(struct receive_wait_s { BOOL x0; id x1; id *x2; id x3; id x4; } *)a0;
- (id)init;
- (void)dealloc;
- (BOOL)findMatch:(id)a0;
- (void)unconnect:(id)a0;

@end
