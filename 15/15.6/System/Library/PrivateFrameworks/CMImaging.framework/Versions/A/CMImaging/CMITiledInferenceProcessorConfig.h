@class NSArray;

@interface CMITiledInferenceProcessorConfig : NSObject

@property (nonatomic) char isAllocated;
@property (retain, nonatomic) NSArray *pipeline;
@property (nonatomic) unsigned long long bufferCount;
@property (nonatomic) char useTextureArrays;
@property (nonatomic) char shouldAutoCommit;
@property (nonatomic) char allocateIOBuffersAtLoad;

- (id)init;
- (void).cxx_destruct;

@end
