@class NSColor;

@interface ReaderThemeButton : NSButton {
    NSColor *_fillColor;
    NSColor *_checkColor;
}

@property (nonatomic, getter=isChecked) char checked;

- (void).cxx_destruct;
- (void)_updateImage;
- (id)_themeButtonImage;
- (void)setFillColor:(id)a0 checkColor:(id)a1;

@end
