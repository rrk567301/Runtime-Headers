@interface VCMediaRecorderHistoryBuffer : NSObject {
    id _delegate;
    unsigned int _bufferLength;
    struct __CFArray { } *_timestampQueue;
    struct __CFDictionary { } *_sampleMap;
    unsigned int _lastTimestamp;
    struct __CFAllocator { } *_timestampAllocator;
}

- (void)flushBuffer;
- (id)delegate;
- (void)dealloc;
- (int)getCount;
- (struct opaqueCMSampleBuffer { } *)getClosestSampleForTimestamp:(unsigned int)a0;
- (id)initWithDelegate:(id)a0 bufferLength:(int)a1;

@end
