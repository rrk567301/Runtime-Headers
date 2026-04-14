@interface SCScreenshotManager : NSObject

+ (void)captureImageWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)captureImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
+ (struct CGImage { } *)captureImageWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (struct CGImage { } *)captureImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)captureSDRAndHDRImagesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)captureSDRAndHDRImagesWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct opaqueCMSampleBuffer { } *)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)captureScreenshotWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)captureScreenshotWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)saveImageForCGImageDestination:(struct CGImageDestination { } *)a0 image:(struct CGImage { } *)a1 format:(struct __CFString { } *)a2;
+ (id)saveImageToFileWithURL:(id)a0 format:(id)a1 sdrImage:(struct CGImage { } *)a2 hdrImage:(struct CGImage { } *)a3;
+ (BOOL)saveImageWithGainmapForCGImageDestination:(struct CGImageDestination { } *)a0 sdrImage:(struct CGImage { } *)a1 hdrImage:(struct CGImage { } *)a2;
+ (BOOL)saveImageWithURL:(id)a0 format:(struct __CFString { } *)a1 sdrImage:(struct CGImage { } *)a2 hdrImage:(struct CGImage { } *)a3;
+ (id)serializePropertiesWithScreenshotConfiguration:(id)a0;
+ (void)updateImageRequestOptions:(id)a0 forGainMap:(BOOL)a1;
+ (void)updateImageRequestProperties:(id)a0;

@end
