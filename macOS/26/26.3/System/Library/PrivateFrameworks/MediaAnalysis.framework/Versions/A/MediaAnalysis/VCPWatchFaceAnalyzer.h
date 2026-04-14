@class NSDictionary;

@interface VCPWatchFaceAnalyzer : NSObject {
    NSDictionary *_options;
}

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (int)analyzeAsset:(id)a0 cancel:(id /* block */)a1 results:(id *)a2;

@end
