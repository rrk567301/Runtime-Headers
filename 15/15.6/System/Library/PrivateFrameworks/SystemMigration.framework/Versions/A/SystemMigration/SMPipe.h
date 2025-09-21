@interface SMPipe : NSObject {
    int _fds[2];
    char _opened;
}

- (void)dealloc;
- (void)close;
- (char)open;
- (id)readDataOfLength:(unsigned long long)a0 withTimeout:(double)a1;
- (char)writeData:(id)a0 withTimeout:(double)a1;

@end
