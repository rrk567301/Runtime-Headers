@protocol MTLLogState;

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (retain, nonatomic) id<MTLLogState> logState;

+ (id)alloc;
+ (id)commandQueueDescriptor;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
