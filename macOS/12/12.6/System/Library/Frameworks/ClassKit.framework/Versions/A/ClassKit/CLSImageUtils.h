@interface CLSImageUtils : CLSObject

+ (id)JPEGDataFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (struct CGImage { } *)CGImageFromJPEGData:(id)a0 error:(id *)a1;
+ (id)JPEGDataFromCGImage:(struct CGImage { } *)a0 desiredMinimumDimension:(unsigned long long)a1 desiredMaximumDimension:(unsigned long long)a2 error:(id *)a3;
+ (id)JPEGDataForThumbnailForFileAtURL:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 scaleFactor:(double)a2 error:(id *)a3;

@end
