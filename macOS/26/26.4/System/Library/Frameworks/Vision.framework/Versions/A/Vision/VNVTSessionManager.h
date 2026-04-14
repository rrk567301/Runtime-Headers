@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { struct { void *__ptr_; } ; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { struct { void *__ptr_; } ; } _pixelRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id).cxx_construct;

@end
