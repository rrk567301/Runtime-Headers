@interface SUICKPActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (BOOL)_expectsSearchUIView;
- (BOOL)_shouldRenderButtonOverlay;
- (BOOL)_isIndicatingActivity;

@end
