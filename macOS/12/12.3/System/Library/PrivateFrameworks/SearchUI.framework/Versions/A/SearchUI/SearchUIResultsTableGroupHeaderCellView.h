@class NSTextField, TLKStackView, NSView, NSTrackingArea, NSTimer, TLKTextButton, SFResultSection;
@protocol SearchUITableHeaderViewDelegate, SFFeedbackListener;

@interface SearchUIResultsTableGroupHeaderCellView : TLKTableCellView

@property (retain) NSView *separatorView;
@property (retain) NSTextField *rolloverField;
@property (retain) NSTrackingArea *trackingArea;
@property (retain) NSTimer *trackingTimer;
@property (retain) TLKTextButton *headerOptionButton;
@property (retain) TLKStackView *stackView;
@property (retain) SFResultSection *section;
@property BOOL isExpanded;
@property (retain) id<SFFeedbackListener> feedbackListener;
@property (retain) id<SearchUITableHeaderViewDelegate> delegate;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (id)initWithContentView:(id)a0;
- (BOOL)mouseInView;
- (id)moreResultsPunchout;
- (void)moreButtonPressed;
- (BOOL)supportsShowMoreInApp;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)a0;
- (id)attributedStringWithSymbolImageName:(id)a0 text:(id)a1;
- (void)updateButtonWithAttributedText:(id)a0 image:(id)a1;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1;
- (void)handleMouseEnterStatus;
- (void)clearTimerAndHide;
- (void)toggleShowAll:(id)a0;

@end
