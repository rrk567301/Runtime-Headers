@class NSString, NSDictionary, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView <OKCollectionProxyDataSource, OKWidgetMicaViewProxyExports> {
    char _scaleToFit;
    char _autoplay;
    double _duration;
}

@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) OKWidgetMicaDocument *micaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (id)valueForUndefinedKey:(id)a0;
- (char)isPlaying;
- (void)layoutSubviews;
- (void)restart;
- (char)prepareForDisplay:(char)a0;
- (id)initWithWidget:(id)a0;
- (char)settingAutoplay;
- (double)settingDuration;
- (id)settingResource;
- (id)allKeysForDictionaryProxy:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)loadMicaDocumentIfNeeded;
- (void)prepareForRefresh;
- (char)prepareForUnload:(char)a0;
- (char)prepareForWarmup:(char)a0;
- (void)setSettingAutoplay:(char)a0;
- (void)setSettingDuration:(double)a0;
- (void)setSettingOptions:(id)a0;
- (void)setSettingResource:(id)a0;
- (void)setSettingScaleToFit:(char)a0;
- (id)settingObjectForKey:(id)a0;
- (id)settingOptions;
- (char)settingScaleToFit;
- (void)unloadMicaDocument;
- (void)updateMicaDocumentLayer;

@end
