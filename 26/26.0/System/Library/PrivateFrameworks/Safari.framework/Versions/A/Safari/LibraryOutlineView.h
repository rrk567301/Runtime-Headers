@class NSString, NSTrackingArea;
@protocol LibraryOutlineViewDelegate;

@interface LibraryOutlineView : OutlineViewPlus <TabDraggingDestination> {
    long long _longClickedRow;
    NSTrackingArea *_trackingArea;
}

@property (weak) id<LibraryOutlineViewDelegate> delegate;
@property (nonatomic) BOOL draggingSessionActive;
@property (nonatomic) BOOL tabGroupDraggingSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTrackingAreas;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (void)mouseMoved:(id)a0;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)_commonLibraryOutlineViewInit;
- (void)_didRecognizeLongPress:(id)a0;
- (BOOL)_handleTrackingAreaEvent:(id)a0;
- (long long)draggingImageType;
- (void)updateTitleForLibraryItem:(id)a0;
- (void)updateTrailingButtonForLibraryItem:(id)a0;

@end
