@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (id)requestOptions;
- (void)cleanUp;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;

@end
