@class _STPeerProviderContext, NSString, NSXPCConnection;
@protocol _STSpeechTranslatorService;

@interface _STXPCClient : NSObject <_STPeerProviding>

@property (retain, nonatomic) id<_STSpeechTranslatorService> translatorPeer;
@property (retain, nonatomic) _STPeerProviderContext *peerProviderContext;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) id<_STSpeechTranslatorService> synchronousTranslatorPeer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithXPCConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_exportedInterface;
- (id)_fetchRemoteTranslatorPeer;
- (BOOL)_setUpXPCConnectionWithDelegate:(id)a0;
- (BOOL)setUpPeerForDelegate:(id)a0 context:(id)a1;

@end
