@interface DDBridgeVertexLayout : NSObject

@property (nonatomic, readonly) long long bufferIndex;
@property (nonatomic, readonly) long long bufferOffset;
@property (nonatomic, readonly) long long bufferStride;

- (id)init;
- (id)initWithBufferIndex:(long long)a0 bufferOffset:(long long)a1 bufferStride:(long long)a2;

@end
