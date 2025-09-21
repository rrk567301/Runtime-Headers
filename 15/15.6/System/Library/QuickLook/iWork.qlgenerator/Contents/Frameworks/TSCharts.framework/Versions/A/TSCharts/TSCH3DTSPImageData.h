@class TSPData, TSCH3DTSPImageDataTexture;

@interface TSCH3DTSPImageData : NSObject {
    TSCH3DTSPImageDataTexture *_parent;
}

@property (retain, nonatomic) TSPData *data;

+ (id)dataWithTSPImageData:(id)a0;

- (void).cxx_destruct;
- (void)setParent:(id)a0;
- (struct CGImage { } *)newCGImage;
- (char)hasCompleteData;
- (char)canLoadCachedDataForDataCache:(id)a0;
- (id)databufferForDataCache:(id)a0;
- (id)initWithTSPImageData:(id)a0;
- (id)p_decodeCachedData:(id)a0 imageSize:(void *)a1;
- (id)p_encodeImageSize:(void *)a0 andMipmapData:(id)a1;
- (id)p_generateMipmapsBuffer;
- (id)uniqueFilename;

@end
