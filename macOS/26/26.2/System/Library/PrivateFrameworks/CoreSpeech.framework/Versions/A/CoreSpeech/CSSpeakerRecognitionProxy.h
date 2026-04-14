@class CSSSRXPCClient, NSString;
@protocol CSSpeakerRecognitionProxyProtocol;

@interface CSSpeakerRecognitionProxy : NSObject <CSSSRXPCClientDelegate>

@property (retain, nonatomic) CSSSRXPCClient *ssrXPCClient;
@property (readonly, weak, nonatomic) id<CSSpeakerRecognitionProxyProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishSpeakerRecognition:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)invalidateXPCConnection;
- (void)startXPCConnection;

@end
