@class SNLPITFMModelInfo, SNLPITFMModelBundle;

@interface SNLPITFMClassifier : NSObject {
    struct unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> { struct { struct ITFMOrchestrator *__ptr_; } ; } _orchestrator;
    struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct { struct SNLPAssetLogger *__ptr_; } ; } _assetLogger;
}

@property (readonly, nonatomic) SNLPITFMModelBundle *modelBundle;
@property (readonly, nonatomic) SNLPITFMModelInfo *modelInfo;

+ (struct unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> { struct { struct ITFMParserRequest *x0; } x0; })_convertRequest:(id)a0;
+ (id)_convertResponse:(struct ITFMParserResponse { void /* function */ **x0; struct PtrVector<sirinluinternalitfm::ITFMHypothesis> { struct vector<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> { void *x0; void *x1; struct { void *x0; } x2; } x0; } x1; struct unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>> { struct { struct Parser *x0; } x0; } x2; float x3; BOOL x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x5; })a0;
+ (id /* block */)_initializationBlock;
+ (id)classifierWithModelBundle:(id)a0 modelInfo:(id)a1 error:(id *)a2;
+ (id)classifierWithModelBundle:(id)a0 modelInfo:(id)a1 initializationBlock:(id /* block */)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)responseForRequest:(id)a0 error:(id *)a1;
- (struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct { struct SNLPAssetLogger *x0; } x0; })_setupAssetLogger;
- (id)initWithModelBundle:(id)a0 modelInfo:(id)a1 initializationBlock:(id /* block */)a2 error:(id *)a3;

@end
