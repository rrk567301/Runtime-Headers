@class AVConferenceXPCClient, NSUUID, NSLocale, NSObject;
@protocol OS_dispatch_queue, AVCCaptionsClientDelegate;

@interface AVCCaptionsClient : NSObject {
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSLocale *_sourceLocale;
    NSLocale *_locale;
    int _direction;
}

@property (class, readonly, nonatomic) BOOL isCaptioningSupported;

@property (readonly) id<AVCCaptionsClientDelegate> delegate;
@property (readonly) BOOL captionsSupported;
@property (readonly) BOOL captionsEnabled;
@property (readonly) long long streamToken;
@property (readonly) NSUUID *translatorIdentifier;
@property (readonly) NSUUID *reportingSamplingUUID;

- (void)disconnect;
- (void)dealloc;
- (BOOL)connect:(unsigned int)a0;
- (id)sourceLocale;
- (void)enableCaptions:(BOOL)a0;
- (void)configureCaptions:(id)a0;
- (id)initWithDelegate:(id)a0 streamToken:(long long)a1;
- (void)setSourceLocale:(id)a0;
- (id)captionsLanguageDetectorResultsWithInternalResults:(id)a0;
- (id)captionsResultsWithInternalResults:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)didChangeSourceLocale:(id)a0;
- (void)didConfigureCaptionsWithError:(id)a0;
- (void)didDetectGibberish:(BOOL)a0;
- (void)didDisableCaptions:(BOOL)a0 error:(id)a1;
- (void)didEnableCaptions:(BOOL)a0 error:(id)a1;
- (void)didProduceLanguageHypothesis:(id)a0;
- (void)didStartCaptioningWithReason:(unsigned char)a0;
- (void)didStopCaptioningWithReason:(unsigned char)a0;
- (void)didStopLanguageDetectorWithError:(id)a0;
- (void)didUpdateCaptions:(id)a0 isRemote:(BOOL)a1;
- (id)initWithDelegate:(id)a0 translatorIdentifier:(id)a1;
- (id)initWithDelegate:(id)a0 translatorIdentifier:(id)a1 direction:(int)a2 reportingSamplingUUID:(id)a3;
- (void)registerBlocksForNotifications;
- (BOOL)setUpInternalStateWithDelegate:(id)a0 clientType:(unsigned int)a1;

@end
