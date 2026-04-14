@class ACUISEdgeInsets;

@interface ACUISActivitySceneMetrics : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, copy, nonatomic) ACUISEdgeInsets *edgeInsets;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (void).cxx_destruct;
- (id)_ActivitySceneMetrics;
- (id)initWithSceneMetrics:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 edgeInsets:(id)a2;

@end
