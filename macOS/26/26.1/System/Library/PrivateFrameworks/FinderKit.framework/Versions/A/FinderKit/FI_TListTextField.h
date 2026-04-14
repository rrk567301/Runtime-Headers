@interface FI_TListTextField : FI_TTextField

@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (void)initCommon;
- (void)_windowChangedKeyState;
- (void)updateTextColor;

@end
