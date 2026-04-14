@class NSString, NSObject, SCMLHandler;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MADVideoSessionSafetyClassificationTask : NSObject <MADVideoSessionProcessingSubtaskProtocol> {
    NSString *_signpostPayload;
    BOOL _enableDetectionTypeN;
    BOOL _enableDetectionTypeGV;
    SCMLHandler *_safetyHandlerTypeN;
    SCMLHandler *_safetyHandlerTypeGV;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (readonly, nonatomic) NSString *requestID;

+ (id)dependencies;
+ (id)_addToDetectionResults:(id)a0 sensitivityKey:(id)a1 sensitivity:(id)a2 sensitivityScoreKey:(id)a3 sensitivityScore:(id)a4;
+ (id)taskWithRequest:(id)a0 signpostPayload:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)createUprightPixelBuffer:(struct __CVBuffer **)a0 fromSourceBuffer:(struct __CVBuffer { } *)a1 andOrientation:(unsigned int)a2;
- (id)initWithRequestID:(id)a0 enableDetectionTypeN:(BOOL)a1 enableDetectionTypeGV:(BOOL)a2 signpostPayload:(id)a3;
- (unsigned long long)performQRCodeDetections:(unsigned long long)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 results:(id *)a3;
- (BOOL)processPixelBufferAsset:(id)a0 resultHandler:(id /* block */)a1;
- (int)scalePixelBuffer:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer **)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 width:(int)a3 height:(int)a4 format:(unsigned int)a5;

@end
