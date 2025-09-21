@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (void).cxx_destruct;
- (id)requestOptions;
- (void)cleanUp;
- (char)prepare:(out id *)a0;

@end
