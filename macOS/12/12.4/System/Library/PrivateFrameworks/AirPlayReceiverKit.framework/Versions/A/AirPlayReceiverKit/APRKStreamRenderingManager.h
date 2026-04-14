@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol APRKStreamRenderingManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APRKStreamRenderingManager : NSObject {
    struct AirPlayReceiverServerPrivate { } *_server;
    NSMutableArray *_renderersArray;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useCALayerForMirroring;
    BOOL _shouldForwardLayers;
    BOOL _usesHomeKitIntegration;
    BOOL _optimizeAudioRenderingLatency;
    struct CGSize { double width; double height; } _customDisplaySize;
    struct CGSize { double width; double height; } _customDisplaySizeMax;
    unsigned long long _displayHDRMode;
    unsigned long long _airPlayVideoVersionSupport;
    long long _permissionTimeout;
    long long _permissionGrantPeriod;
    NSMutableDictionary *_permittedClients;
    NSObject<OS_dispatch_queue> *_permittedClientsQueue;
    NSObject<OS_dispatch_source> *_permissionGrantTimer;
    BOOL _permissionEnabled;
}

@property (weak, nonatomic) id<APRKStreamRenderingManagerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long supportedModesMask;
@property (nonatomic) unsigned long long maxNumberOfConcurrentSessions;
@property (nonatomic) unsigned long long concurrentPlaybackPolicy;
@property (nonatomic) BOOL supportRemoteControl;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)activeRenderers;
- (void)setDelegateQueue:(id)a0;
- (id)delegateQueue;
- (id)allRenderers;
- (BOOL)demoModeEnabled;
- (BOOL)optimizeAudioRenderingLatency;
- (BOOL)shouldForwardLayers;
- (int)_startReceiverServerWithSupportedModesMask:(unsigned long long)a0;
- (id)_rendererForUniqueIDInternal:(id)a0;
- (void)_setAirPlayVideoVersionSupport:(unsigned long long)a0;
- (struct __CFString { } *)_getHDRModeString:(unsigned long long)a0;
- (BOOL)_isPermittedClient:(id)a0;
- (void)_addPermittedClient:(id)a0;
- (struct CGSize { double x0; double x1; })_customDisplaySizeFromPrefsWithDefault:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_customDisplaySizeMaxFromPrefsWithDefault:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_customDisplayHDRModeFromPrefsWithDefault:(unsigned long long)a0;
- (void)setAirPlayVideoVersionSupport:(unsigned long long)a0;
- (void)_initPermittedClients;
- (int)startReceiverServer;
- (int)startReceiverServerWithSupportedRenderingModes:(unsigned long long)a0;
- (int)stopReceiverServer;
- (id)rendererForUniqueID:(id)a0;
- (unsigned long long)activeRenderersCount;
- (id)allClientNames;
- (void)setUseCALayerForMirroring:(BOOL)a0;
- (BOOL)useCALayerForMirroring;
- (void)setOptimizeAudioRenderingLatency:(BOOL)a0;
- (void)setCustomDisplaySizeMax:(struct CGSize { double x0; double x1; })a0;
- (void)setDisplayHDRMode:(unsigned long long)a0;
- (unsigned long long)displayHDRMode;
- (unsigned long long)airPlayVideoVersionSupport;
- (void)setUsesHomeKitIntegration:(BOOL)a0;
- (BOOL)usesHomeKitIntegration;
- (void)setDemoModeEnabled:(BOOL)a0;
- (void)setPermissionTimeout:(long long)a0;
- (long long)permissionTimeout;
- (int)forcePINRefresh;
- (BOOL)setAdvertisingAccessMode:(unsigned long long)a0 withError:(id *)a1;
- (unsigned long long)getAdvertisingAccessMode;
- (BOOL)systemSupportsWiFiUDM;
- (id)createStreamRendererWithUniqueID:(id)a0 clientName:(id)a1 UIController:(struct OpaqueAPReceiverUIController { } *)a2;
- (void)removeRendererWithUniqueID:(id)a0;
- (void)setShouldForwardLayers:(BOOL)a0;
- (void)processShowGlobalPasscodePromptRequest:(id)a0 withClientName:(id)a1;
- (void)processHideGlobalPasscodePromptRequest;
- (BOOL)isAllowedToProceedForClientWithName:(id)a0 clientID:(id)a1;
- (void)_setPTPClockEnabled:(BOOL)a0;

@end
