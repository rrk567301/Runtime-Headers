@interface boundingBoxForMerge : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendBBox;
@property (nonatomic) long long index2RoiArray;

@end
