@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;
@protocol NUScalePolicy, NUPurgeableStorage;

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithHistogramRequest:(id)a0;
- (id)histogramRequest;

@end
