@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {
    id _delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}

- (void)dealloc;
- (id)delegate;
- (void)flushBuffer;
- (int)getCount;
- (id)initWithDelegate:(id)a0 bufferLength:(int)a1 dispatchQueue:(id)a2;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer { } *)a0 timestamp:(unsigned int)a1;
- (struct opaqueCMSampleBuffer { } *)getClosestSampleForTimestamp:(unsigned int)a0;
- (void)dequeueOneFrame;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer { } *)a0 timestamp:(unsigned int)a1;
- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)a0;

@end
