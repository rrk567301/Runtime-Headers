@interface VCPAudioVideoEmbeddingFuser : NSObject

+ (char)supportFusionForVersion:(int)a0;

- (id)results;
- (int)fuse:(id /* block */)a0;
- (id)initWithEmbeddingVersion:(unsigned long long)a0;
- (int)loadAudioEmbeddingResults:(id)a0 andVideoEmbeddingResults:(id)a1;

@end
