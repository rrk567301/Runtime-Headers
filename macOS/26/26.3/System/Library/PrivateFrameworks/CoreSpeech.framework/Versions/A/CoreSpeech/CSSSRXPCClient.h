@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSSRXPCClientDelegate;

@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<CSSSRXPCClientDelegate> delegate;

- (void)invalidate;
- (void)didFinishSpeakerRecognition:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_createClientConnection;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (id)_getRemoteServiceProxyObject;
- (void)startXPCConnection;

@end
