@protocol MTLIOScratchBufferAllocator;

@interface MTLIOCommandQueueDescriptor : NSObject <NSCopying> {
    unsigned long long _maxWorkerThreads;
}

@property unsigned long long maxWorkerThreads;
@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) long long priority;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long maxCommandsInFlight;
@property (retain) id<MTLIOScratchBufferAllocator> scratchBufferAllocator;

- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
