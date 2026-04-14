@class NSTextField, TLKStackView, NSView, NSTrackingArea, NSTimer;

@interface SearchUIResultsTableGroupHeaderCellView : SearchUITableHeaderViewShared

@property (retain) NSView *separatorView;
@property (retain) NSTextField *rolloverField;
@property (retain) NSTrackingArea *trackingArea;
@property (retain) NSTimer *trackingTimer;
@property (retain) TLKStackView *stackView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (id)initWithContentView:(id)a0;
- (BOOL)mouseInView;
- (void)clearTimerAndHide;
- (void)handleMouseEnterStatus;
- (void)toggleShowAll:(id)a0;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1;

@end
