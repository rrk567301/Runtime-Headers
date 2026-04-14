@class NSArray;

@interface CMITiledInferenceProcessorConfig : NSObject

@property (nonatomic) BOOL isAllocated;
@property (retain, nonatomic) NSArray *pipeline;
@property (nonatomic) unsigned long long bufferCount;
@property (nonatomic) BOOL useTextureArrays;
@property (nonatomic) BOOL shouldAutoCommit;
@property (nonatomic) BOOL allocateIOBuffersAtLoad;

- (void).cxx_destruct;
- (id)init;

@end
