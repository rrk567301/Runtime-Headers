@class TSDBitmapRenderingQualityInfo;

@interface TSDImageRenderingConfiguration : NSObject

@property (readonly, nonatomic) char wantsHDR;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) double additionalScale;
@property (readonly, nonatomic) TSDBitmapRenderingQualityInfo *qualityInfo;
@property (readonly, nonatomic) char isForPrinting;
@property (readonly, nonatomic) char isForPDF;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCGContext:(struct CGContext { } *)a0;
- (id)initWithContentsScale:(double)a0 wantsHDR:(char)a1;
- (id)i_initWithCanvas:(id)a0;
- (id)initWantsHDR:(char)a0;
- (id)initWithBitmapQualityInfo:(id)a0;
- (id)initWithContentsScale:(double)a0 additionalScale:(double)a1 wantsHDR:(char)a2;
- (id)initWithContentsScale:(double)a0 additionalScale:(double)a1 wantsHDR:(char)a2 qualityInfo:(id)a3 isForPrinting:(char)a4 isForPDF:(char)a5;

@end
