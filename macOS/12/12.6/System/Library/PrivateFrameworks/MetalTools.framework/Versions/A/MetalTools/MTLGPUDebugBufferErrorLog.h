@class MTLArgument;
@protocol MTLBuffer;

@interface MTLGPUDebugBufferErrorLog : MTLGPUDebugGPULog

@property (nonatomic) unsigned long long addressSpace;
@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long operation;
@property (retain, nonatomic) MTLArgument *argument;
@property (nonatomic) int specifiedUsage;

- (void)dealloc;
- (id)description;
- (id)init;

@end
