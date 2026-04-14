@class KHFrame, KHTextView, NSString, NSPopUpButton, NSSegmentedControl;

@interface KHTextAlignmentController : UXViewController <NSMenuDelegate>

@property (retain) NSPopUpButton *columnCount;
@property (retain) NSSegmentedControl *paragraphAlignment;
@property (retain) NSSegmentedControl *verticalAlignment;
@property (retain) KHTextView *textView;
@property (retain) KHFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)validateMenuItem:(id)a0;
- (void)loadView;
- (id)initWithTextView:(id)a0;
- (void)updateControls;
- (void)hAlignChosen:(id)a0;
- (void)vAlignChosen:(id)a0;
- (void)columnChosen:(id)a0;

@end
