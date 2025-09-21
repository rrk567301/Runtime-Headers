@class NSView, PRLikeness, NSDictionary;
@protocol MBSecondPartyHost;

@interface CNLikenessEditorBuddyController : CNAvatarEditorViewController

@property (weak) id<MBSecondPartyHost> host;
@property (retain) NSView *editorAreaView;
@property (retain) PRLikeness *finalizedLikeness;
@property (retain) NSDictionary *userInfo;

+ (char)shouldDisplayLikenessEditorForAppleID:(id)a0;
+ (void)shouldDisplayLikenessEditorForPrimaryiCloudAccountWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setWindowTitle:(id)a0;
- (void)setNextButtonAction:(id /* block */)a0;
- (void)setPreviousButtonAction:(id /* block */)a0;
- (char)isBuddy;
- (char)allowEditingMemojiAndMonogramOnly;
- (id)initWithHost:(id)a0 userInfo:(id)a1;
- (char)isBackwardsNavigationEnabled;
- (void)setNextButtonEnabled:(char)a0;
- (void)setNextButtonTitle:(id)a0;
- (void)setPreviousButtonEnabled:(char)a0;

@end
