@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSSRXPCClientDelegate;

@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<CSSSRXPCClientDelegate> delegate;

- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (void)invalidate;
- (void)didFinishSpeakerRecognition:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)startXPCConnection;

@end
