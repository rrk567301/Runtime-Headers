@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;
@protocol NUScalePolicy, NUPurgeableStorage;

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (void)cleanUp;
- (id)initWithRequest:(id)a0;
- (id)histogramRequest;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)initWithHistogramRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
