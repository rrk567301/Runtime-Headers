@interface VNFaceExpressionDetector : VNDetector {
    struct shared_ptr<vision::mod::LandmarkAttributes> { struct LandmarkAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } m_FaceAttributesImpl;
    BOOL _modelFilesWereMemmapped;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (int)expressionTypeFromString:(id)a0;
+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)a0;
+ (id)createExpressionDetectionDictionaryFromScores:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;

@end
