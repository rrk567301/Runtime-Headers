@class _RWITCPServer, NSMutableData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _RWITCPConnectionDelegate, OS_dispatch_source;

@interface _RWITCPConnection : NSObject {
    int _socket;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_inputSource;
    NSObject<OS_dispatch_source> *_outputSource;
    BOOL _shutdown;
    BOOL _outputSourceSuspended;
    BOOL _inputSourceCancelled;
    BOOL _outputSourceCancelled;
    NSMutableArray *_outputMessageQueue;
    NSMutableData *_incomingData;
    _RWITCPServer *_server;
    long long _type;
}

@property (weak, nonatomic) id<_RWITCPConnectionDelegate> delegate;

+ (id)TCPConnectionWithSocketPath:(id)a0;

- (void)_shutdown;
- (void)dealloc;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_commonInitializationWithServer:(id)a0 socket:(int)a1 type:(long long)a2;
- (void)_createInputSource;
- (void)_createOutputSource;
- (void)_dispatchSourceCancelled;
- (void)_handleInput;
- (void)_handleOutput;
- (void)_processIncomingBytes:(const char *)a0 length:(long long)a1;
- (void)_setOutputSourceSuspended:(BOOL)a0;
- (id)initWithServer:(id)a0 socket:(int)a1;
- (void)startReceiving;

@end
