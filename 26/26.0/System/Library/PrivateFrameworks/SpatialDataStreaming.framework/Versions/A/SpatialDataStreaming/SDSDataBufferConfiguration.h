@interface SDSDataBufferConfiguration : NSObject

@property (nonatomic, readonly) long long bufferCountCapacity;
@property (nonatomic, readonly) long long numItemsToAllocatePerBuffer;

- (id)init;
- (id)initWithBufferCountCapacity:(long long)a0;
- (id)initWithBufferCountCapacity:(long long)a0 numItemsToAllocatePerBuffer:(long long)a1;
- (id)initWithNumItemsToAllocatePerBuffer:(long long)a0;

@end
