@class NSShadow;

@interface OKWidgetLabelView : OKWidgetLabelViewProxy {
    NSShadow *_shadow;
}

- (void)dealloc;
- (id)initWithWidget:(id)a0;
- (id)settingTextShadowColor;
- (void)setSettingTextShadowColor:(id)a0;
- (struct CGSize { double x0; double x1; })settingTextShadowOffset;
- (void)setSettingTextShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingTextBackgroundColor:(id)a0;

@end
