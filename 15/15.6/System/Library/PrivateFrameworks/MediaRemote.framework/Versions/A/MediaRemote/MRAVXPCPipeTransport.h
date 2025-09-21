@class NSError, NSString, NSXPCListenerEndpoint, MRAVOutputDevice, NSXPCConnection, NSOutputStream, NSRunLoop, NSInputStream, NSObject, CURunLoopThread, MRDeviceInfo;
@protocol OS_dispatch_queue;

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <NSStreamDelegate, MRVirtualDevicePipeProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    NSInputStream *_inputStream;
    NSInputStream *_inputStreamInternal;
    NSOutputStream *_outputStream;
    NSOutputStream *_outputStreamInternal;
    char _useSystemAuthenticationPrompt;
    NSXPCConnection *_pipeConnection;
    NSRunLoop *_runLoop;
    CURunLoopThread *_runLoopThread;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)uid;
- (void)reset;
- (id)hostname;
- (id)deviceInfo;
- (void)sendData:(id)a0;
- (void)_onQueue_resetStreams;
- (id)createConnectionWithUserInfo:(id)a0;
- (char)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (id)initWithOutputDevice:(id)a0 pipeEndpoint:(id)a1;
- (char)requiresCustomPairing;
- (void)setShouldUseSystemAuthenticationPrompt:(char)a0;
- (char)shouldUseSystemAuthenticationPrompt;

@end
