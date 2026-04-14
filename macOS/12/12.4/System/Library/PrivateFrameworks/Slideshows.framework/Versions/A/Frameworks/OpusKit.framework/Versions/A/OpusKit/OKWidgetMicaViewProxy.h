@class NSString, NSDictionary, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports> {
    BOOL _scaleToFit;
    BOOL _autoplay;
    double _duration;
}

@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) OKWidgetMicaDocument *micaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (void)resume;
- (id)valueForUndefinedKey:(id)a0;
- (void)pause;
- (BOOL)isPlaying;
- (void)restart;
- (void)layoutSubviews;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)prepareForRefresh;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingAutoplay:(BOOL)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (id)settingOptions;
- (void)setSettingOptions:(id)a0;
- (BOOL)settingScaleToFit;
- (void)setSettingScaleToFit:(BOOL)a0;
- (void)setSettingDuration:(double)a0;
- (void)unloadMicaDocument;
- (void)updateMicaDocumentLayer;
- (void)loadMicaDocumentIfNeeded;
- (id)settingResource;
- (void)setSettingResource:(id)a0;
- (BOOL)settingAutoplay;
- (double)settingDuration;

@end
