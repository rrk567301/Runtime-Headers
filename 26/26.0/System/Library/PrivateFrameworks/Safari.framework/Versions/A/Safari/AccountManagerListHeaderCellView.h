@class NSButton, NSTrackingArea;

@interface AccountManagerListHeaderCellView : NSTableCellView {
    NSTrackingArea *_trackingArea;
}

@property (weak, nonatomic) NSButton *expandToggleButton;
@property (nonatomic) long long buttonType;

- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)viewWillDraw;

@end
