@class MTLTextureViewDescriptor;
@protocol MTLTexture;

@interface GTReplayerTextureViewPoolTextureEntry : NSObject <GTReplayerTextureViewPoolEntry> {
    id<MTLTexture> _texture;
    MTLTextureViewDescriptor *_descriptor;
}

+ (id)entryWithTexture:(id)a0;
+ (id)entryWithTexture:(id)a0 descriptor:(id)a1;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (id)initWithTexture:(id)a0 descriptor:(id)a1;
- (id)materializeTextureView;

@end
