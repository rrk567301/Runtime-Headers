@class NSView, CalUIHyperlinkTextView;

@interface EKUIJunkGadget : EKUISingleViewGadget

@property (retain) NSView *junkView;
@property (retain) CalUIHyperlinkTextView *reportJunkText;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (BOOL)shouldBeFullWidth;
- (void)reportJunk;
- (id)makeJunkView;
- (BOOL)adjustConstraintsInResponseToLayout;

@end
