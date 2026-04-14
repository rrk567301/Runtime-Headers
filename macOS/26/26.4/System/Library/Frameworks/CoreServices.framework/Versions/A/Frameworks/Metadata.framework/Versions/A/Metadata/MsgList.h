@interface MsgList : NSObject {
    struct __CFArray { } *msgs;
}

- (void)add:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)findMatch:(struct receive_wait_s { BOOL x0; id x1; id *x2; id x3; id x4; } *)a0;

@end
