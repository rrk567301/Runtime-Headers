@class NSData, VCPCNNModelEspresso, NSArray;

@interface VCPVideoCaptionEncoder : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
    BOOL _forceNNGraph;
    BOOL _defaultModel;
}

@property (readonly) int embeddingHeight;
@property (readonly) int embeddingWidth;
@property (readonly) int embeddingChannels;
@property (readonly) int embeddingSequenceLength;
@property (readonly) float *videoEmbedding;
@property (readonly) NSData *embedding;

+ (id)videoLanguageBackboneTestURL;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)initWithModelPath:(id)a0;
- (int)inference:(float *)a0;

@end
