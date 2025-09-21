@class NSString, AVAssetWriter, AVAssetWriterInputMetadataAdaptor, NSMutableDictionary, NSObject, NSMutableArray, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface CAREAtlasVideoFileWriter : NSObject {
    NSString *m_outputPath;
    unsigned int m_width;
    unsigned int m_height;
    AVAssetWriter *m_writer;
    AVAssetWriterInput *m_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *m_pixelBufferAdaptor;
    AVAssetWriterInput *m_metadataInput;
    AVAssetWriterInputMetadataAdaptor *m_metadataAdaptor;
    NSObject<OS_dispatch_queue> *m_queue;
    NSObject<OS_dispatch_source> *m_timer;
    NSMutableArray *m_videoFramesFiFo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_videoFramesFiFoLock;
    NSObject<OS_dispatch_semaphore> *m_semaphore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_stopTime;
}

@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct SharedPtr<MTL::TextureDescriptor> { struct TextureDescriptor *m_pObject; } pixelBufferTextureDescriptor;
@property (nonatomic) struct SharedPtr<MTL::Texture> { struct Texture *m_pObject; } pixelBufferTexture;
@property (nonatomic) unsigned long long syncedFrameNumber;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) NSMutableDictionary *layerEntityMap;
@property BOOL atomicKeepRunning;
@property (readonly, nonatomic) NSString *outputPath;

- (void)dealloc;
- (BOOL)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)startWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)appendPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 outputPath:(id)a2;
- (void)stopWithDelegate:(struct weak_ptr<re::CALayerRecordAtlasManagerDelegate> { struct CALayerRecordAtlasManagerDelegate *x0; struct __shared_weak_count *x1; })a0;

@end
