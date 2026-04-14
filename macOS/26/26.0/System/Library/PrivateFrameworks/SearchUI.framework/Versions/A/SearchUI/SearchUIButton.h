@interface SearchUIButton : TLKButton

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL useCompactMode;

- (BOOL)allowsVibrancy;
- (id)initWithType:(unsigned long long)a0;
- (void)setFixedSize:(struct CGSize { double x0; double x1; })a0;
- (void)resetCursorRects;
- (void)updateWithType:(unsigned long long)a0;
- (id)imageNameForToggleState:(BOOL)a0;
- (BOOL)isPlayButton;

@end
