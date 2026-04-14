@class NSString, NSButton, SegmentedControlWithDynamicWidth;
@protocol SidebarTopBarViewDelegate;

@interface SidebarTopBarView : NSView <CustomKeyViewLoop> {
    SegmentedControlWithDynamicWidth *_segmentedControl;
    NSButton *_backButton;
}

@property (weak, nonatomic) id<SidebarTopBarViewDelegate> delegate;
@property (nonatomic) BOOL showsBackButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)safari_keyViews;
- (void)_setUpSegmentedControl;
- (void)_setUpSeparatorView;
- (id)_segmentIdentifiersThatCanBeShown;
- (id)_allSegmentIdentifiers;
- (BOOL)_canShowSegmentWithIdentifier:(id)a0;
- (void)_addBackButton;
- (void)_removeBackButton;
- (void)_didSelectBackButton:(id)a0;
- (void)_segmentedControlSelectionDidChange:(id)a0;
- (id)_imageForSegmentWithIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfTabWithIdentifier:(id)a0;
- (void)setMenuForBookmarksSegment:(id)a0;
- (id)selectedSegmentIdentifier;
- (void)setSelectedSegmentIdentifier:(id)a0;

@end
