@class IMKUIDelimiter, NSMutableDictionary, NSArray, IMKUICandidateLayoutTraits, NSMutableArray, NSSegmentedControl;
@protocol IMKUICandidateSortingBarDelegate;

@interface IMKUICandidateSortingBarView : NSView

@property (retain, nonatomic) NSMutableDictionary *titleToButtonMapping;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSSegmentedControl *segmentedControl;
@property (nonatomic) BOOL needsToCalculateLayout;
@property (nonatomic) double totalButtonWidth;
@property (retain, nonatomic) IMKUIDelimiter *delimiter;
@property long long alignment;
@property (weak) id<IMKUICandidateSortingBarDelegate> delegate;
@property (readonly) NSArray *titleStrings;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) NSArray *sortingModes;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didSelectSegment:(id)a0;
- (void)calculateLayout;
- (void)addSortingMethodWithTitle:(id)a0;
- (void)didHoverOverButton:(id)a0;
- (void)didSelectButton:(id)a0;
- (void)removeAllSortingMethods;
- (void)removeSortingMethodWithTitle:(id)a0;

@end
