@class NSImageView, EMIMDFRCategoryButton, NSLayoutConstraint, NSButton, NSMutableArray;

@interface CPKEmojiIMCategoryView : NSView

@property long long categoryCount;
@property char isExpanded;
@property char animating;
@property NSButton *closeButton;
@property EMIMDFRCategoryButton *categoryButtonCell;
@property NSImageView *expandArrowImage;
@property (retain) NSMutableArray *expandedImageCells;
@property EMIMDFRCategoryButton *pickerButtonCell;
@property double expandedViewWidthForTap;
@property double expandedViewWidthForPress;
@property double expandedCategoryButtonWidth;
@property (retain) id firstTouchID;
@property char clickedPickerButton;
@property char touchCanceled;
@property long long highlightedCategoryIndex;
@property char buttonHighlighted;
@property char inPressAndHold;
@property char inPulledOut;
@property char startingSearchMode;
@property (nonatomic) char inSearchMode;
@property NSLayoutConstraint *categoryViewWidthConstraint;
@property NSLayoutConstraint *categoryButtonWidthConstraint;
@property NSLayoutConstraint *categoryButtonLeadingConstraint;
@property NSLayoutConstraint *categoryButtonTrailingConstraint;
@property NSLayoutConstraint *firstCategoryCellLeadingConstraint;
@property (readonly) double pulloutLimitWidth;

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)expand;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (id)_buttonBoxWithImage:(id)a0;
- (void)_characterPickerButtonClicked;
- (void)_collapseByScroll:(char)a0 withAnimation:(char)a1;
- (void)_didClickedCloseButton:(id)a0;
- (void)_expandByPressAndHold:(char)a0 withAnimation:(char)a1;
- (void)_handlePressed;
- (void)_highlightSegementCellAtIndex:(long long)a0 needScroll:(char)a1;
- (void)_setStateOfButtonCell:(id)a0 highlighted:(char)a1;
- (void)_trackCellsWithTouch:(id)a0;
- (void)collapseByScroll:(char)a0;
- (id)getStateInfo;
- (void)pullOutBy:(double)a0 start:(char)a1 finished:(char)a2;
- (void)scrollViewChangedToCategory:(long long)a0;
- (void)setStateInfo:(id)a0;

@end
