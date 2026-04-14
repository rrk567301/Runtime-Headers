@protocol MTLBuffer;

@interface SCNMTLBuffer : NSObject

@property long long usedCount;
@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) void *contents;
@property (nonatomic) id dataSource;

- (void)dealloc;
- (void)incrementUsedCount;
- (long long)decrementUsedCount;

@end
