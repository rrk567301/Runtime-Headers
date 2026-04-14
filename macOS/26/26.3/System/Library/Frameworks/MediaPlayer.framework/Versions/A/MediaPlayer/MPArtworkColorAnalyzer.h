@class NSImage;

@interface MPArtworkColorAnalyzer : NSObject

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) long long algorithm;

+ (id)translateFromMLColorAnalysis:(id)a0;

- (id)initWithImage:(id)a0;
- (id)analyze;
- (void).cxx_destruct;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)_fallbackColorAnalysis;
- (id)initWithImage:(id)a0 algorithm:(long long)a1;

@end
