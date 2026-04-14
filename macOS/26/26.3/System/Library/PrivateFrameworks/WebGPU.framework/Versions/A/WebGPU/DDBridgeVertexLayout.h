@interface DDBridgeVertexLayout : NSObject

@property (nonatomic, readonly) int bufferIndex;
@property (nonatomic, readonly) int bufferOffset;
@property (nonatomic, readonly) int bufferStride;

- (id)init;
- (id)initWithBufferIndex:(int)a0 bufferOffset:(int)a1 bufferStride:(int)a2;

@end
