@class ACUISEdgeInsets;

@interface ACUISMutableActivitySceneMetrics : ACUISActivitySceneMetrics

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) ACUISEdgeInsets *edgeInsets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
