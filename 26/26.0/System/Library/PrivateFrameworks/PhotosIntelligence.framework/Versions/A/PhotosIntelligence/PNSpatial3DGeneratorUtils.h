@interface PNSpatial3DGeneratorUtils : NSObject

+ (void)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
+ (BOOL)hasSpatial3DWidgetResourceForAsset:(id)a0;
+ (BOOL)shouldExecuteAlchemistInBackground;

@end
