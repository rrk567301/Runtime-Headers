@class NSButton, NSTrackingArea;

@interface AccountManagerListHeaderCellView : NSTableCellView {
    NSTrackingArea *_trackingArea;
}

@property (weak, nonatomic) NSButton *expandToggleButton;
@property (nonatomic) long long buttonType;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)viewWillDraw;

@end
