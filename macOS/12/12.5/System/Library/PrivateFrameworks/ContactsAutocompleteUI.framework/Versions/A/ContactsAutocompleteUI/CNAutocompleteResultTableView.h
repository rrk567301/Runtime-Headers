@class NSTrackingArea;

@interface CNAutocompleteResultTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL shouldAllowVibrancy;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)updateTrackingAreas;
- (void)selectRow:(unsigned long long)a0;
- (BOOL)moveUp;
- (BOOL)moveDown;
- (id)makeTrackingAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)selectNextValidRowFromRow:(long long)a0;
- (void)selectFirstRow;

@end
