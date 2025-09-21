@interface MLCLSTMDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long hiddenSize;
@property (readonly, nonatomic) unsigned long long layerCount;
@property (readonly, nonatomic) char usesBiases;
@property (readonly, nonatomic) char batchFirst;
@property (readonly, nonatomic) char isBidirectional;
@property (readonly, nonatomic) char returnsSequences;
@property (readonly, nonatomic) float dropout;
@property (readonly, nonatomic) unsigned long long resultMode;

+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(char)a3 batchFirst:(char)a4 isBidirectional:(char)a5 returnsSequences:(char)a6 dropout:(float)a7 resultMode:(unsigned long long)a8;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(char)a3 isBidirectional:(char)a4 dropout:(float)a5;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(char)a3 batchFirst:(char)a4 isBidirectional:(char)a5 dropout:(float)a6;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(char)a3 batchFirst:(char)a4 isBidirectional:(char)a5 returnsSequences:(char)a6 dropout:(float)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (unsigned long long)numberOfLayers;
- (char)bias;
- (id)initWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(char)a3 batchFirst:(char)a4 isBidirectional:(char)a5 returnsSequences:(char)a6 dropout:(float)a7 resultMode:(unsigned long long)a8;

@end
