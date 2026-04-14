@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSSRXPCClientDelegate;

@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<CSSSRXPCClientDelegate> delegate;

- (void)didFinishSpeakerRecognition:(id)a0;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_createClientConnection;
- (id)init;
- (void)dealloc;
- (id)_getRemoteServiceProxyObject;
- (void)startXPCConnection;

@end
