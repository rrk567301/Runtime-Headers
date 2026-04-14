@class SNLPITFMModelInfo, SNLPITFMModelBundle;

@interface SNLPITFMClassifier : NSObject {
    struct unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> { struct __compressed_pair<itfm_inference_orchestrator::orchestration::ITFMOrchestrator *, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> { struct ITFMOrchestrator *__value_; } __ptr_; } _orchestrator;
    struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct SNLPAssetLogger *__value_; } __ptr_; } _assetLogger;
}

@property (readonly, nonatomic) SNLPITFMModelBundle *modelBundle;
@property (readonly, nonatomic) SNLPITFMModelInfo *modelInfo;

+ (id /* block */)_initializationBlock;
+ (id)classifierWithModelBundle:(id)a0 modelInfo:(id)a1 initializationBlock:(id /* block */)a2 error:(id *)a3;
+ (id)classifierWithModelBundle:(id)a0 modelInfo:(id)a1 error:(id *)a2;
+ (struct unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> { struct __compressed_pair<const sirinluinternalitfm::ITFMParserRequest *, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> { struct ITFMParserRequest *x0; } x0; })_convertRequest:(id)a0;
+ (id)_convertResponse:(struct ITFMParserResponse { void /* function */ **x0; struct unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>> { struct __compressed_pair<sirinluexternal::Parser *, std::default_delete<sirinluexternal::Parser>> { struct Parser *x0; } x0; } x1; float x2; BOOL x3; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x4; })a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelBundle:(id)a0 modelInfo:(id)a1 initializationBlock:(id /* block */)a2 error:(id *)a3;
- (struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct SNLPAssetLogger *x0; } x0; })_setupAssetLogger;
- (id)responseForRequest:(id)a0 error:(id *)a1;

@end
