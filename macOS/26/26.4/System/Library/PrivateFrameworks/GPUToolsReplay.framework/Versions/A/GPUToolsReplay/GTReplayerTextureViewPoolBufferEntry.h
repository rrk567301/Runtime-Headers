@class MTLTextureDescriptor;
@protocol MTLBuffer;

@interface GTReplayerTextureViewPoolBufferEntry : NSObject <GTReplayerTextureViewPoolEntry> {
    id<MTLBuffer> _buffer;
    MTLTextureDescriptor *_descriptor;
    unsigned long long _offset;
    unsigned long long _bytesPerRow;
}

+ (id)entryWithBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3;

- (id)initWithBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)materializeTextureView;

@end
