@interface NSNavBannerButtonCell : NSButtonCell

@property BOOL disabledWhenInactive;

- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)initTextCell:(id)a0;
- (BOOL)_acceptsFirstMouseForEvent:(id)a0 inView:(id)a1;
- (void)_setupAttributes;

@end
