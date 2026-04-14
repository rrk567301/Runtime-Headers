@interface VNVTSessionManager : NSObject {
    struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> { struct { void *__ptr_; } ; } _pixelTransferSessionsHandler;
    struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> { struct { void *__ptr_; } ; } _pixelRotationSessionsHandler;
    unsigned long long _maxSessionsCount;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
