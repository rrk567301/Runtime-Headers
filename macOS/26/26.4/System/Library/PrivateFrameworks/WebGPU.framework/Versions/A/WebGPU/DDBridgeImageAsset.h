@class NSData;

@interface DDBridgeImageAsset : NSObject {
    void /* function */ data;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long depth;
@property (nonatomic, readonly) long long bytesPerPixel;
@property (nonatomic, readonly) unsigned long long textureType;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) long long mipmapLevelCount;
@property (nonatomic, readonly) long long arrayLength;
@property (nonatomic, readonly) unsigned long long textureUsage;
@property (nonatomic, readonly) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } swizzle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)a0 width:(long long)a1 height:(long long)a2 depth:(long long)a3 bytesPerPixel:(long long)a4 textureType:(unsigned long long)a5 pixelFormat:(unsigned long long)a6 mipmapLevelCount:(long long)a7 arrayLength:(long long)a8 textureUsage:(unsigned long long)a9 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a10;

@end
