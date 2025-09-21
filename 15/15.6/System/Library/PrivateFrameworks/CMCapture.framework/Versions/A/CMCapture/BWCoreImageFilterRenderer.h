@class NSString, NSObject, CIContext;
@protocol OS_dispatch_queue, MTLCommandQueue;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {
    int _portraitRenderQuality;
    float _inputRenderQuality;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<MTLCommandQueue> _metalCommandQueue;
    char _hairnetEnabled;
}

@property (readonly, nonatomic) char usingDepth;
@property (retain, nonatomic) CIContext *renderingQueueContext;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) char supportsAnimation;
@property (readonly, nonatomic) char adjustsMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)context:(char)a0 deferredPhotoProcessorEnabled:(char)a1 err:(int *)a2;
+ (void)prewarmCoreImageSDOFRenderingFilter;
+ (void)prewarmPortraitFilterVersion:(unsigned int)a0 semanticStyleFilters:(char)a1;

- (void)dealloc;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initForRenderingWithDepth:(char)a0 context:(id)a1 portraitRenderQuality:(int)a2 hairnetEnabled:(char)a3 metalCommandQueue:(id)a4 figThreadPriority:(unsigned int)a5;
- (int)prepareForRenderingWithParameters:(id)a0 inputVideoFormat:(id)a1 inputMediaPropertiesByAttachedMediaKey:(id)a2;
- (void)renderUsingParameters:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 originalPixelBuffer:(struct __CVBuffer { } *)a3 processedPixelBuffer:(struct __CVBuffer { } *)a4 completionHandler:(id /* block */)a5;

@end
