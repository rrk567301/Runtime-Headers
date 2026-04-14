@class PGDisplayPipelineCache, NSString, NSArray, _PGDisplayNub, PGDisplayPipelineDescriptor, NSObject, _PGDevice;
@protocol MTLTexture, MTLDevice, OS_dispatch_source, OS_dispatch_queue, MTLBuffer;

@interface _PGDisplay : NSObject <PGDisplay> {
    BOOL _reservedSerialNum;
    BOOL _attached;
    _PGDevice *_device;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _displayMutex;
    NSObject<OS_dispatch_source> *_newFrameEventSource;
    id<MTLDevice> _mtlDevice;
    unsigned short _width;
    unsigned short _height;
    id<MTLBuffer> _posBuf;
    id<MTLBuffer> _texBuf;
    id<MTLBuffer> _fragShaderPropertyBuf;
    id<MTLTexture> _currentFrame;
    BOOL _currentFrameEncoded;
    unsigned long long _vtxCount;
    PGDisplayPipelineDescriptor *_renderPipelineDescriptor;
    PGDisplayPipelineCache *_renderPipelineCache;
    unsigned int _iosurfacePixelFormat;
    id<MTLTexture> _gammaTableTex;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } colorMatrix; } _fragShaderProperties;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _nubMutex;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInMillimeters;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ newFrameEventHandler;
@property (readonly, nonatomic) id /* block */ cursorGlyphHandler;
@property (readonly, nonatomic) id /* block */ cursorShowHandler;
@property (readonly, nonatomic) id /* block */ cursorMoveHandler;
@property (readonly, nonatomic) id /* block */ cursorGlyphHandler2;
@property (readonly, nonatomic) id /* block */ sleepHandler;
@property (readonly, nonatomic) id /* block */ modeListResponsivenessChangeHandler;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; } cursorPosition;
@property (readonly, nonatomic) unsigned int serialNum;
@property (readonly, nonatomic) unsigned long long minimumTextureUsage;
@property (readonly, nonatomic) unsigned long long guestPresentCount;
@property (readonly, nonatomic) unsigned long long hostPresentCount;
@property (readonly, nonatomic) unsigned long long port;
@property (copy, nonatomic) NSArray *modeList;
@property (nonatomic) _PGDisplayNub *nub;
@property (readonly, nonatomic) id /* block */ modeChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initSerialNumDB;
+ (BOOL)reserveSerialNum:(unsigned int)a0;
+ (void)unreserveSerialNum:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)encodeCurrentFrameToCommandBuffer:(id)a0 texture:(id)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 port:(unsigned long long)a2 serialNum:(unsigned int)a3;
- (void)internalEncodeCurrentFrameToCommandBuffer:(id)a0 texture:(id)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (void)updateGammaTable:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 entryCount:(unsigned int)a3 sum:(unsigned int)a4;
- (void)modeChangeWidth:(unsigned long long)a0 height:(unsigned long long)a1 iosurfacePixelFormat:(unsigned int)a2;
- (void)encodeRenderFrame:(id)a0 toDisplay:(id)a1 withCmdBuf:(id)a2 viewport:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void)presentFrame:(id)a0 iosurfacePixelFormat:(unsigned int)a1 task:(id)a2 gammaTableVirtualOffset:(unsigned long long)a3 gammaTableMappedLength:(unsigned long long)a4 gammaTableEntryCount:(unsigned int)a5 gammaTableSum:(unsigned int)a6 colorMatrix:(float[3][4])a7 completionBlock:(id /* block */)a8;
- (void)updateColorMatrix:(float[3][4])a0;
- (void)signalCurrentFrame;

@end
