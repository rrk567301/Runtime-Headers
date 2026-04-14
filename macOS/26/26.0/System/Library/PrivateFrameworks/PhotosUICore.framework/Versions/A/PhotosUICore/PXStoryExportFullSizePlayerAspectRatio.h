@interface PXStoryExportFullSizePlayerAspectRatio : PXStoryExportAspectRatio

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedTitle;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)adjustedForOrientation:(id)a0;

@end
