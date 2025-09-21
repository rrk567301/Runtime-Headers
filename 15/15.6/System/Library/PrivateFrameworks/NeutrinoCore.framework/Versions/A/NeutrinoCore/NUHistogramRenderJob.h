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
- (char)complete:(out id *)a0;
- (char)render:(out id *)a0;
- (id)cacheKey;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (id)histogramRequest;
- (id)initWithHistogramRequest:(id)a0;
- (id)scalePolicy;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;

@end
