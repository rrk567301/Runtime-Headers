@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSSRXPCClientDelegate;

@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<CSSSRXPCClientDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (id)_getRemoteServiceProxyObject;
- (id)init;
- (void)didFinishSpeakerRecognition:(id)a0;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (void)_createClientConnection;
- (void).cxx_destruct;
- (void)startXPCConnection;

@end
