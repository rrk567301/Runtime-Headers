@interface VUIWindowController : NSWindowController <TVLibraryWindowController, NSUserInterfaceValidations>

@property (readonly, nonatomic) BOOL isShowingLibraryView;

- (void)goBack:(id)a0;
- (id)initWithWindow:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (void)doSetFocusOnSearchField:(id)a0;

@end
