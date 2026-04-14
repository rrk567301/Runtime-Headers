@class NSButton;
@protocol AKSignatureTableCellViewDelegate;

@interface AKSignatureTableCellView_Mac : NSTableCellView

@property (retain) id viewEventMonitor;
@property BOOL eventsCurrentlyInside;
@property (retain) NSButton *deleteButton;
@property (weak) id<AKSignatureTableCellViewDelegate> tableCellViewDelegate;

- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)awakeFromNib;
- (void)viewDidMoveToSuperview;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)_setupAccessibilityCustomActions;

@end
