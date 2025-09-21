@class NSView, CNUIDeprecatedIKImageBrowserView, NSTextField;

@interface CNPhotoLikenessEditorMediaLibraryViewController : NSViewController

@property (retain) CNUIDeprecatedIKImageBrowserView *mediaLibraryView;
@property (retain) CNUIDeprecatedIKImageBrowserView *defaultPhotosLibraryView;
@property (retain) NSView *emptyContentView;
@property (retain) NSTextField *emptyContentTextField;

+ (Class)mediaLibraryClass;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)createLoadingView;
- (void)setEmptyContentString:(id)a0;
- (void)setLoadingIndicatorHidden:(BOOL)a0;

@end
