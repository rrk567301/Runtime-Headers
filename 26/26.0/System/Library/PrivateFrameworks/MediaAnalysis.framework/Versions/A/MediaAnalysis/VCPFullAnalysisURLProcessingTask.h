@class NSDictionary, NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    BOOL _noResultStrip;
    NSURL *_assetURL;
    NSURL *_pairedAssetURL;
    unsigned long long _analysisTypes;
    NSDictionary *_options;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) NSDictionary *partialAnalysis;

+ (id)taskForURLAsset:(id)a0 withOptions:(id)a1 analysisTypes:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (BOOL)autoCancellable;
- (id)initWithURLAsset:(id)a0 withOptions:(id)a1 analysisTypes:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (float)resourceRequirement;
- (int)runWithCancelBlock:(id /* block */)a0;

@end
