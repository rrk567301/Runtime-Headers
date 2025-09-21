@class _NSFlowLayoutSection, _NSFlowLayoutRow;

@interface _NSFlowLayoutItem : NSObject {
    struct { unsigned char sizeEstimated : 1; unsigned char positionEstimated : 1; unsigned char sizeHasBeenSet : 1; } _itemFlags;
}

@property (weak, nonatomic) _NSFlowLayoutSection *section;
@property (weak, nonatomic) _NSFlowLayoutRow *rowObject;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (nonatomic, getter=isSizeEstimated) char sizeEstimated;
@property (nonatomic) char sizeHasBeenSet;
@property (nonatomic, getter=isPositionEstimated) char positionEstimated;

- (id)copy;
- (void).cxx_destruct;

@end
