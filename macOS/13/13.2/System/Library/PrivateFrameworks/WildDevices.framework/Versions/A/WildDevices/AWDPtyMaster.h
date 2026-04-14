@class NSString;

@interface AWDPtyMaster : AWDSerial {
    id /* block */ _onRead;
    int _masterFd;
    int _slaveFd;
    NSString *_ptyName;
    NSString *_symlinkPath;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)terminate;
- (void)processReadBuffer;
- (id)initWithSymlink:(id)a0 onRead:(id /* block */)a1;

@end
