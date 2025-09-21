@class NSString, MADPersonIdentificationRequest, VCPMADServiceImageAsset;

@interface VCPMADPersonIdentificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADPersonIdentificationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

+ (id)dependencies;
+ (id)taskName;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (BOOL)autoCancellable;
- (id)identifyObservations:(id)a0 gallery:(id)a1 photoLibrary:(id)a2;
- (id)identifyObservations:(id)a0 personsModel:(id)a1 petsModel:(id)a2 photoLibrary:(id)a3;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
