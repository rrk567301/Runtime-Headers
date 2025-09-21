@interface ICAutoCompleteSuggestionsViewControllerWindow : NSPanel

@property (readonly, nonatomic) char shouldShowDivider;
@property (readonly, nonatomic) char shouldShowSectionHeaders;

- (char)canBecomeKeyWindow;
- (unsigned long long)shadowOptions;

@end
