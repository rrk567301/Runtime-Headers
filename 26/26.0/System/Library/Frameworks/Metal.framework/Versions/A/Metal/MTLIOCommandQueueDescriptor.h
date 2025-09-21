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

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
