@class NSMutableArray, APUnfairLock;

@interface PCRingBuffer : NSObject

@property (retain, nonatomic) NSMutableArray *ringBuffer;
@property (readonly, nonatomic) APUnfairLock *lock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cappedRingBufferTo:(unsigned long long)a0;
- (id)init;

@end
