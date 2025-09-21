@class NSArray;

@interface MLCUpsampleLayer : MLCLayer

@property (readonly, nonatomic) unsigned long long upsampleWidth;
@property (readonly, nonatomic) unsigned long long upsampleHeight;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) int sampleMode;
@property (readonly, nonatomic) char alignsCorners;

+ (id)layerWithShape:(id)a0;
+ (id)layerWithShape:(id)a0 sampleMode:(int)a1 alignsCorners:(char)a2;

- (id)description;
- (void).cxx_destruct;
- (char)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)initWithShape:(id)a0 sampleMode:(int)a1 alignCorners:(char)a2;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)a0 dimension:(unsigned long long)a1;
- (id)summarizedDOTDescription;

@end
