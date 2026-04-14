@class NSDictionary;

@interface NUImageDataJob : NURenderJob {
    NSDictionary *_data;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (id)requestOptions;
- (void)cleanUp;
- (id)extractDataToDictionary:(id)a0 bounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 dataExtractor:(id)a2 options:(id)a3 colorSpace:(struct CGColorSpace { } *)a4 error:(id *)a5;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
