@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { void *__ptr_; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { void *__ptr_; } _pixelRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
