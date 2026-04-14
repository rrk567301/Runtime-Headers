@interface SMPipe : NSObject {
    int _fds[2];
    BOOL _opened;
}

- (void)close;
- (BOOL)open;
- (void)dealloc;
- (id)readDataOfLength:(unsigned long long)a0 withTimeout:(double)a1;
- (BOOL)writeData:(id)a0 withTimeout:(double)a1;

@end
