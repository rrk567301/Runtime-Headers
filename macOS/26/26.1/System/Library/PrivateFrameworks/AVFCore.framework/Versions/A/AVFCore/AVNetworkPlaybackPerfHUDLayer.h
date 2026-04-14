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
    unsigned long long _hudUpdateInterval;
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
- (BOOL)hudEnabled;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setColor:(int)a0;
- (id)displayStringGenerator;
- (void)getHudSetting;
- (void)copyPropertiesFromStringGenerator:(id)a0;
- (void)_hudUpdateTrigger;
- (void)currentItemTracksChanged;
- (float)getScaleFactorForDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (BOOL)valueLoadedForKey:(id)a0 onObject:(id)a1;
- (void)startDispatchTimer;
- (void).cxx_destruct;
- (void)readHudSettingsAndCallCompletionHandler:(id /* block */)a0;
- (void)currentItemChanged;
- (id)init;
- (void)updateHudWithDisplayString:(id)a0;

@end
