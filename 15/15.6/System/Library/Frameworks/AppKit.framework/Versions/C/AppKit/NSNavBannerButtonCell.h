@interface NSNavBannerButtonCell : NSButtonCell

@property char disabledWhenInactive;

- (id)initWithCoder:(id)a0;
- (char)isEnabled;
- (char)_acceptsFirstMouseForEvent:(id)a0 inView:(id)a1;
- (char)_needRedrawOnWindowChangedKeyState;
- (void)_setupAttributes;
- (id)initTextCell:(id)a0;

@end
