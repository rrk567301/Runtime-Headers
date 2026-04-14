@class NSString, TXRImageInfo, TXRTextureInfo;

@interface TXRParserImageIO : NSObject <TXRParser> {
    TXRImageInfo *_imageInfo;
}

@property (readonly, nonatomic) TXRTextureInfo *textureInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesData:(id)a0;
+ (int)determineColorSpaceClass:(struct CGImage { } *)a0 displayGamut:(unsigned long long)a1 options:(id)a2;
+ (id)decodeCGImage:(struct CGImage { } *)a0 desiredPixelFormat:(unsigned long long)a1 bufferAllocator:(id)a2 options:(id)a3 error:(id *)a4;
+ (id)decodeCGImageNonIndexed:(struct CGImage { } *)a0 desiredPixelFormat:(unsigned long long)a1 bufferAllocator:(id)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)exportTexture:(id)a0 url:(id)a1 error:(id *)a2;
+ (BOOL)exportImage:(id)a0 url:(id)a1 uttype:(const struct __CFString { } *)a2 colorSpace:(struct CGColorSpace { } *)a3 orientation:(unsigned char)a4 error:(id *)a5;
+ (struct CGImage { } *)newCGImageFromImage:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)parsedImageAtLevel:(unsigned long long)a0 element:(unsigned long long)a1 face:(unsigned long long)a2;
- (BOOL)parseData:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;

@end
