@class NSNumber, NSMutableDictionary, AVPlayerLayer, NSObject, AVPlayer;
@protocol OS_dispatch_source;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {
    NSObject<OS_dispatch_source> *_hudTimer;
    BOOL _showHud;
    BOOL _spatialDiagnostics;
    int _colorId;
    double _opacity;
    int _fontSizeInt;
    BOOL _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    float _hudUpdateInterval;
    BOOL _showCompleteURI;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    NSNumber *_displayResolutionHeight;
    NSNumber *_displayResolutionWidth;
    NSNumber *_audioSpatializationMode;
    BOOL _requestInFlight;
    NSMutableDictionary *_loadingStatusCache;
}

@property (weak) AVPlayer *player;
@property (weak) AVPlayerLayer *playerLayer;

- (void)setNeedsDisplay;
- (void)currentItemTracksChanged;
- (BOOL)hudEnabled;
- (void)updateHudWithDisplayString:(id)a0;
- (void)currentItemChanged;
- (float)getScaleFactorForDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (void)copyPropertiesFromStringGenerator:(id)a0;
- (void)setColor:(int)a0;
- (void)startDispatchTimer;
- (void)readHudSettingsAndCallCompletionHandler:(id /* block */)a0;
- (void)_hudUpdateTrigger;
- (void).cxx_destruct;
- (void)getHudSetting;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)valueLoadedForKey:(id)a0 onObject:(id)a1;
- (id)displayStringGenerator;
- (id)init;
- (void)dealloc;

@end
