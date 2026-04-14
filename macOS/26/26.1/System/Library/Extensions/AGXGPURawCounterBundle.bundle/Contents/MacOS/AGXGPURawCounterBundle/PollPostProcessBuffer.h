@class NSMutableData;

@interface PollPostProcessBuffer : NSObject

@property unsigned int srcBufferPrevOffset;
@property unsigned int srcBufferPrevSize;
@property (readonly) NSMutableData *dstBuffer;

- (void)dealloc;
- (void)reset;
- (id)init;

@end
