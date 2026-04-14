@interface SCScreenshotManager : NSObject

+ (void)captureImageWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct CGImage { } *)captureImageWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct opaqueCMSampleBuffer { } *)captureSampleBufferWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
