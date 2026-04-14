@class NSImage;

@interface MPArtworkColorAnalyzer : NSObject

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) long long algorithm;

- (void).cxx_destruct;
- (id)_fallbackColorAnalysis;
- (id)initWithImage:(id)a0 algorithm:(long long)a1;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;

@end
