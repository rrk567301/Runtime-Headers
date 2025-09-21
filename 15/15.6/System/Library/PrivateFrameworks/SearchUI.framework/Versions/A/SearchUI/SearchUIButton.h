@interface SearchUIButton : TLKButton

@property (nonatomic) unsigned long long type;
@property (nonatomic) char useCompactMode;

- (id)initWithType:(unsigned long long)a0;
- (char)allowsVibrancy;
- (void)resetCursorRects;
- (void)setFixedSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithType:(unsigned long long)a0;
- (id)imageNameForToggleState:(char)a0;
- (char)isPlayButton;

@end
