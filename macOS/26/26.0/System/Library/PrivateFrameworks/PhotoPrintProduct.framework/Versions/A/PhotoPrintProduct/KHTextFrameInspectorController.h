@class KHTextView, NSString, KHTextSpacingController, KHTextAlignmentController, KHFontPickerController, KHInspectorTileViewController;

@interface KHTextFrameInspectorController : KHFrameInspectorController <NSTextViewDelegate>

@property (retain, nonatomic) KHInspectorTileViewController *fontTileController;
@property (retain, nonatomic) KHInspectorTileViewController *textAlignmentTileController;
@property (retain, nonatomic) KHInspectorTileViewController *textSpacingTileController;
@property (retain, nonatomic) KHFontPickerController *fontPicker;
@property (retain, nonatomic) KHTextSpacingController *spacingPicker;
@property (retain, nonatomic) KHTextAlignmentController *alignmentPicker;
@property (retain, nonatomic) KHTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidChangeTypingAttributes:(id)a0;
- (id)badgeImage;
- (void)setupModelBindings;
- (void)teardownBindings;
- (id)viewForPresentationMode:(int)a0;

@end
