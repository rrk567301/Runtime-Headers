@class NSTrackingArea;

@interface CNAutocompleteResultTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) char shouldAllowVibrancy;

- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)updateTrackingAreas;
- (void)selectRow:(unsigned long long)a0;
- (char)moveDown;
- (char)moveUp;
- (id)makeTrackingAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectFirstRow;
- (char)selectNextValidRowFromRow:(long long)a0;

@end
