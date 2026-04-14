@interface ICAutoCompleteSuggestionsViewControllerWindow : NSPanel

@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;

- (BOOL)canBecomeKeyWindow;
- (BOOL)isOpaque;
- (void)awakeFromNib;
- (unsigned long long)shadowOptions;

@end
