@class NSMutableData;

@interface PollPostProcessBuffer : NSObject

@property unsigned int srcBufferPrevOffset;
@property unsigned int srcBufferPrevSize;
@property (readonly) NSMutableData *dstBuffer;

- (void)reset;
- (id)init;
- (void)dealloc;

@end
