@class NSMutableData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWDSerial : NSObject {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    char *_tmpReadMemory;
    int _fileDescriptor;
    BOOL _closeWhenDone;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _readCanceled;
    BOOL _readSuspended;
    BOOL _writeCanceled;
    BOOL _pendingTerminate;
    int _baudRate;
    struct termios { unsigned long long c_iflag; unsigned long long c_oflag; unsigned long long c_cflag; unsigned long long c_lflag; unsigned char c_cc[20]; unsigned long long c_ispeed; unsigned long long c_ospeed; } _initialConfig;
    NSString *_portPath;
}

@property (retain, nonatomic) NSMutableData *readBuffer;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long maxReadSize;

+ (void)initialize;
+ (id)availableSerialPortPaths;

- (void)dealloc;
- (void).cxx_destruct;
- (int)fileDescriptor;
- (void)terminate;
- (void)readHandler;
- (void)processReadBuffer;
- (void)emptyReadBuffer;
- (void)appendBytesToWriteBuffer:(const void *)a0 withLength:(unsigned long long)a1;
- (void)appendDataToWriteBuffer:(id)a0;
- (void)cancelSources;
- (void)emptyWriteBuffer;
- (id)initWithFileDescriptor:(int)a0 baudRate:(int)a1 reads:(BOOL)a2 writes:(BOOL)a3 closeWhenDone:(BOOL)a4;
- (id)initWithSerialPortPath:(id)a0 baudRate:(int)a1 reads:(BOOL)a2 writes:(BOOL)a3;
- (void)writeHandler;

@end
