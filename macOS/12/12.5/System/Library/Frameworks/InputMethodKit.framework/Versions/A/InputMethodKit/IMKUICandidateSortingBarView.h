@class NSArray, NSMutableDictionary, IMKUICandidateLayoutTraits, NSMutableArray;
@protocol IMKUICandidateSortingBarDelegate;

@interface IMKUICandidateSortingBarView : NSView

@property (retain, nonatomic) NSMutableDictionary *titleToButtonMapping;
@property (retain, nonatomic) NSMutableArray *titles;
@property (nonatomic) BOOL needsToCalculateLayout;
@property (nonatomic) double totalButtonWidth;
@property long long alignment;
@property (weak) id<IMKUICandidateSortingBarDelegate> delegate;
@property (readonly) NSArray *titleStrings;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) NSArray *sortingModes;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didHoverOverButton:(id)a0;
- (void)didSelectButton:(id)a0;
- (void)removeSortingMethodWithTitle:(id)a0;
- (void)removeAllSortingMethods;
- (void)addSortingMethodWithTitle:(id)a0;
- (void)calculateLayout;

@end
