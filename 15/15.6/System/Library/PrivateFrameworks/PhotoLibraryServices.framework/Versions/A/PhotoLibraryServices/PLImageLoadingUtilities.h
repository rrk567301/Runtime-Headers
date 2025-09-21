@interface PLImageLoadingUtilities : NSObject

+ (void)_assetsdImageForAsset:(id)a0 withFormat:(id)a1 allowPlaceholder:(char)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(char)a4 trackCPLDownload:(char)a5 sync:(char)a6 isCanceledHandler:(id /* block */)a7 completion:(id /* block */)a8;
+ (void)_imageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(char)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(char)a4 networkAccessForced:(char)a5 trackCPLDownload:(char)a6 isCanceledHandler:(id /* block */)a7 completion:(id /* block */)a8 sync:(char)a9;
+ (char)canAccessImageForAsset:(id)a0;
+ (id)newSynchronousImageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(char)a2 outImageProperties:(const struct __CFDictionary **)a3 outDeliveredPlaceholder:(char *)a4;
+ (id)synchronousImageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(char)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(char)a4 networkAccessForced:(char)a5 trackCPLDownload:(char)a6 outImageProperties:(const struct __CFDictionary **)a7 outImageDataInfo:(id *)a8 outCPLDownloadContext:(id *)a9;

@end
