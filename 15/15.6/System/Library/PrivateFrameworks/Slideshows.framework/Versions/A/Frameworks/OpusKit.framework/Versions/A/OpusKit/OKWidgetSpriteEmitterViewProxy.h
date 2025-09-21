@class SKView, NSString, SKTexture, SKEmitterNode;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports> {
    SKView *_skView;
}

@property (copy, nonatomic) NSString *emitterResourceName;
@property (copy, nonatomic) NSString *particuleResourceName;
@property (retain, nonatomic) SKEmitterNode *emitterNode;
@property (retain, nonatomic) SKTexture *particuleTexture;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (char)prepareForDisplay:(char)a0;
- (id)initWithWidget:(id)a0;
- (void)loadEmitterIfNeeded;
- (char)prepareForUnload:(char)a0;
- (char)prepareForWarmup:(char)a0;
- (void)setAntialiasing:(char)a0;
- (void)setSettingBackgroundColor:(id)a0;
- (void)setSettingEmitterResource:(id)a0;
- (void)setSettingParticuleResource:(id)a0;
- (id)settingEmitterResource;
- (id)settingObjectForKey:(id)a0;
- (id)settingParticuleResource;
- (void)unloadEmitter;
- (void)updateEmitter;

@end
