@class NSView, CalUIHyperlinkTextView;

@interface EKUIJunkGadget : EKUISingleViewGadget

@property (retain) NSView *junkView;
@property (retain) CalUIHyperlinkTextView *reportJunkText;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (char)adjustConstraintsInResponseToLayout;
- (id)makeJunkView;
- (void)reportJunk;
- (char)shouldBeFullWidth;
- (char)shouldDisplay;

@end
