@class VCPCNNModelEspressoV2, VCPEspressoV2Data, _MADObjCModelCatalogModel, NSData, VCPTransforms;

@interface VCPImageBackboneAnalyzer : VCPImageAnalyzer {
    VCPTransforms *_transformImage;
    VCPEspressoV2Data *_inputData;
    int _inputWidth;
    int _inputHeight;
    VCPCNNModelEspressoV2 *_modelEspressoV2;
    long long _revision;
    VCPCNNModelEspressoV2 *_mLLMbridge;
    VCPCNNModelEspressoV2 *_safetyMiscBridge;
    VCPCNNModelEspressoV2 *_safetyPrepubescentBridge;
    VCPCNNModelEspressoV2 *_safetyStructuralIntegrityBridge;
    BOOL _useSharedModel;
    _MADObjCModelCatalogModel *_modelCatalogModel;
}

@property (readonly) BOOL isFP16;
@property (readonly) NSData *embedding;
@property (readonly) NSData *spatialEmbedding;
@property (readonly) NSData *hiddenEmbedding;
@property (readonly) NSData *bridgeEmbedding;
@property (nonatomic) BOOL bypassNormalizaton;
@property (nonatomic) long long bridgeEmbeddingType;

+ (BOOL)isBridgeVersion:(unsigned long long)a0 compatibleWithEmbeddingVersion:(unsigned long long)a1;
+ (id)sharedModel:(id)a0 identifier:(id)a1 outputNames:(id)a2 inputNames:(id)a3 functionName:(id)a4 precompiled:(BOOL)a5;

- (void).cxx_destruct;
- (int)computeBridgeEmbedding:(id)a0 forType:(long long)a1;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)configForAspectRatio:(float)a0;
- (id)initWithRequestedAnalyses:(unsigned long long)a0 andRevision:(id)a1 useSharedModel:(BOOL)a2;
- (int)prepareInput:(struct __CVBuffer { } *)a0 withChannels:(int)a1 settling:(BOOL)a2;

@end
