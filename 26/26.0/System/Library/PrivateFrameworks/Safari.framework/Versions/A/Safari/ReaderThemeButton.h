@class NSColor;

@interface ReaderThemeButton : NSButton {
    NSColor *_fillColor;
    NSColor *_checkColor;
}

@property (nonatomic, getter=isChecked) BOOL checked;

- (void)_updateImage;
- (void).cxx_destruct;
- (id)_themeButtonImage;
- (void)setFillColor:(id)a0 checkColor:(id)a1;

@end
