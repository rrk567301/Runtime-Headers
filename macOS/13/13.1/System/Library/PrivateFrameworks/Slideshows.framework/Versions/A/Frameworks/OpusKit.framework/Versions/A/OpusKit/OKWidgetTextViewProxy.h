@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _textEdgeInsets;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textViewFrame;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (id)settingObjectForKey:(id)a0;
- (id)layoutSettingsKeys;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textEdgeInsets;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })settingTextEdgeInsets;
- (void)setSettingTextEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
