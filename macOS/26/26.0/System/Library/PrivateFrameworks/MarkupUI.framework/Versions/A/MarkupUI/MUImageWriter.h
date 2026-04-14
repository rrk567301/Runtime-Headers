@interface MUImageWriter : NSObject

+ (id)outputTypesSupportingHDR;

- (struct CGImage { } *)_renderImageForBaseImage:(id)a0 controller:(id)a1 wantsHDR:(BOOL)a2;
- (void)addGainMapImageToImageDestination:(struct CGImageDestination { } *)a0 sdrImage:(struct CGImage { } *)a1 hdrImage:(struct CGImage { } *)a2 imageMetadata:(struct CGImageMetadata { } *)a3 imageOptions:(id)a4;
- (void)addHDRImageToImageDestination:(struct CGImageDestination { } *)a0 hdrImage:(struct CGImage { } *)a1 imageMetadata:(struct CGImageMetadata { } *)a2 imageOptions:(id)a3;
- (id)encodedModelFromAnnotationsController:(id)a0 encrypt:(BOOL)a1;
- (BOOL)writeUsingBaseImage:(id)a0 withAnnotationsFromController:(id)a1 asImageOfType:(id)a2 toConsumer:(struct CGDataConsumer { } *)a3 embedSourceImageAndAnnotationsAsMetadata:(BOOL)a4 encryptPrivateMetadata:(BOOL)a5 error:(id *)a6;

@end
