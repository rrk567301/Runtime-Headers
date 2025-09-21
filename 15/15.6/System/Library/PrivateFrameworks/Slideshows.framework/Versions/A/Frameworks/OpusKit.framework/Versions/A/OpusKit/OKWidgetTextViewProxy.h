@interface OKWidgetTextViewProxy : OKWidgetView <OKWidgetTextViewProxyExports> {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _textEdgeInsets;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textViewFrame;
- (char)prepareForDisplay:(char)a0;
- (id)initWithWidget:(id)a0;
- (id)layoutSettingsKeys;
- (char)prepareForUnload:(char)a0;
- (char)prepareForWarmup:(char)a0;
- (void)setSettingTextEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)settingObjectForKey:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })settingTextEdgeInsets;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textEdgeInsets;

@end
