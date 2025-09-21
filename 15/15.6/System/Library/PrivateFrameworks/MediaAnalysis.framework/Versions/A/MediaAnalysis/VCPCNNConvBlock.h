@class VCPCNNData;

@interface VCPCNNConvBlock : VCPCNNBlock {
    int _filterSize;
    int _filterNum;
    VCPCNNData *_filter;
    VCPCNNData *_bias;
    int _chunk;
    char _reLU;
    int _padding;
    int _padSize;
    int _stride;
    int _groups;
    char _batchNorm;
}

+ (Class)convBlockClass:(int)a0;
+ (id)convBlockWithFilterSize:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(char)a3 padding:(char)a4;
+ (id)convBlockWithFilterSize:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(char)a3 padding:(char)a4 groups:(int)a5 stride:(int)a6 batchNorm:(char)a7;

- (void).cxx_destruct;
- (char)useGPU;
- (int)constructBlock:(id)a0 context:(id)a1;
- (id)initWithParameters:(int)a0 filterNum:(int)a1 chunk:(int)a2 reLU:(char)a3 padding:(char)a4 groups:(int)a5 stride:(int)a6 batchNorm:(char)a7;
- (char)supportGPU;

@end
