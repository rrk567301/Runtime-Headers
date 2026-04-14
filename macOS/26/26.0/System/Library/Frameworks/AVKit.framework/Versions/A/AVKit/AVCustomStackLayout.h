@class NSArray, NSMutableArray, NSString;

@interface AVCustomStackLayout : NSObject

@property (retain, nonatomic) NSArray *rowHeads;
@property (retain, nonatomic) NSMutableArray *rowSpacing;
@property (copy, nonatomic) NSString *debugIdentifier;

- (id)prioritizedSizeThatFitsSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)setRowSpacing:(double)a0 afterRow:(unsigned long long)a1;
- (void).cxx_destruct;
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)a0;
- (id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)a0 endingWithItem:(id)a1 withAvailableSize:(struct CGSize { double x0; double x1; })a2;
- (double)_heightForRow:(unsigned long long)a0 startingFrom:(id)a1 inBoundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)_lastVisibleLayoutItemAttributesFrom:(id)a0;
- (id)initWithLayoutRowHeads:(id)a0;
- (id)itemsThatFitSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutFramesInBoundingSize:(struct CGSize { double x0; double x1; })a0;

@end
