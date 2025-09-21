@interface TSTLocalAccumulator : NSObject

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } idOfFirstOccurence;
@property (nonatomic) unsigned long long count;

- (id)description;

@end
