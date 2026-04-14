@class NSString;

@interface PXAudioRoutingManager : NSObject <PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ audiblePlayerIdentifiers;
    void /* unknown type, empty encoding */ didPerformInitialAudioSessionConfiguration;
    void /* unknown type, empty encoding */ kMXSessionProperty_PreferredOutputAudioScoreForSmartRouting;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioSession;
    void /* unknown type, empty encoding */ injectedAudioSession;
    void /* unknown type, empty encoding */ internalQueue;
    void /* unknown type, empty encoding */ logger;
}

@property (class, nonatomic, retain) PXAudioRoutingManager *shared;

@property (nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)prepareAudioSessionForContentAwareAudioRouting;

@end
