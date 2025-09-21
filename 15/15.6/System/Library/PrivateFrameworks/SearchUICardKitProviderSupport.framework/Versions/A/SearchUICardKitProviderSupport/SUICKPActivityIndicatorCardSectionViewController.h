@interface SUICKPActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (char)_expectsSearchUIView;
- (char)_isIndicatingActivity;
- (char)_shouldRenderButtonOverlay;

@end
