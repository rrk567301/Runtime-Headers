@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {
    NSMutableDictionary *_streamTokenList;
    NSMutableSet *_translatorIdentifiers;
    NSMutableSet *_translationContexts;
    NSMutableSet *_transcriptionContexts;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)dealloc;
- (void)registerBlocksForService;
- (id)init;
- (void)deregisterBlocksForService;
- (void)streamToken:(long long)a0 didDetectGibberish:(BOOL)a1;
- (long long)addCaptionsSourceForTranslatorIdentifier:(id)a0 streamToken:(long long)a1 direction:(int)a2 reportingSamplingUUID:(id)a3;
- (id)captionsSourceFromClientContext:(id)a0;
- (id)deserializeLocale:(id)a0 withError:(id *)a1 serializedLocale:(id)a2;
- (void)dispatchedRegisterCaptionsSource:(id)a0 streamToken:(long long)a1;
- (void)dispatchedUnregisterCaptionsSourceWithStreamToken:(long long)a0;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(char *)a1 arguments:(id)a2;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(char *)a1 arguments:(id)a2 isTranslated:(BOOL)a3;
- (void)registerCaptionsSource:(id)a0 streamToken:(long long)a1;
- (void)streamToken:(long long)a0 didChangeSourceLocale:(id)a1;
- (void)streamToken:(long long)a0 didConfigureCaptionsWithError:(id)a1;
- (void)streamToken:(long long)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didProduceLanguageHypothesis:(id)a1;
- (void)streamToken:(long long)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didStopLanguageDetectorWithError:(id)a1;
- (void)streamToken:(long long)a0 didUpdateCaptions:(id)a1;
- (id)streamTokenEntryForTranslatorIdentifier:(id)a0;
- (id)streamTokenEntryFromClientContext:(id)a0;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)a0;
- (void)updateSourceLocale:(id)a0 clientContext:(id)a1;
- (void)updateTranslationTranscriptionContextArray:(id)a0;

@end
