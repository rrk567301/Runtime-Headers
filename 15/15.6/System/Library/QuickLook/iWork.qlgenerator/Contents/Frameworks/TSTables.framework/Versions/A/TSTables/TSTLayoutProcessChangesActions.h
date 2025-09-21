@interface TSTLayoutProcessChangesActions : NSObject

@property (nonatomic) char layoutInvalidate;
@property (nonatomic) char layoutInvalidateProvider;
@property (nonatomic) char layoutInvalidateSize;
@property (nonatomic) char layoutInvalidateTableNameVisibility;
@property (nonatomic) char layoutSpacesInvalidateCoordinates;
@property (nonatomic) unsigned int layoutSpacesInvalidateCoordinatesAfterRow;
@property (nonatomic) char layoutSpacesInvalidateTableOffsets;
@property (nonatomic) char layoutInvalidateChildren;
@property (nonatomic) char layoutUpdateChildren;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } editingCellIDForInvalidation;
@property (nonatomic) char layoutResetScaleToFit;

- (id)init;
- (void)layoutSpacesInvalidateCoordinatesAfterRow:(id)a0;

@end
