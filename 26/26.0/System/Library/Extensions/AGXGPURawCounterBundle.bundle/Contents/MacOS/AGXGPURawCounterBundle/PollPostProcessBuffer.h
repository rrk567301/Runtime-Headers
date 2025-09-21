@class NSMutableData;

@interface PollPostProcessBuffer : NSObject

@property unsigned int srcBufferPrevOffset;
@property unsigned int srcBufferPrevSize;
@property (readonly) NSMutableData *dstBuffer;

- (void)reset;
- (void)dealloc;
- (id)init;

@end
