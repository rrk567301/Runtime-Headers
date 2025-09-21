@class PIVideoStabilizeRequest, NUImagePropertiesRequest, PLPhotoEditRenderer, PXVideoStabilizeOperationSpec;
@protocol PXVideoStabilizeResult;

@interface PXVideoStabilizeOperation : PXVideoProcessingOperation {
    PLPhotoEditRenderer *_lock_renderer;
    PIVideoStabilizeRequest *_lock_stabilizeRequest;
    NUImagePropertiesRequest *_lock_imagePropertiesRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<PXVideoStabilizeResult> result;
@property (readonly, nonatomic) PXVideoStabilizeOperationSpec *spec;

- (void)dealloc;
- (void)cancel;
- (id)renderer;
- (void).cxx_destruct;
- (void)setRenderer:(id)a0;
- (void)_cancelWork;
- (id)imagePropertiesRequest;
- (id)initWithSpec:(id)a0;
- (id)performProcessing;
- (void)setImagePropertiesRequest:(id)a0;
- (void)setStabilizeRequest:(id)a0;
- (id)stabilizeRequest;

@end
