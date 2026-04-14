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

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithTextView:(id)a0;
- (void)updateControls;
- (void)columnChosen:(id)a0;
- (void)hAlignChosen:(id)a0;
- (void)vAlignChosen:(id)a0;

@end
