@interface ICAutoCompleteSuggestionsViewControllerWindow : NSPanel

@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;

- (BOOL)isOpaque;
- (BOOL)canBecomeKeyWindow;
- (void)awakeFromNib;
- (unsigned long long)shadowOptions;

@end
