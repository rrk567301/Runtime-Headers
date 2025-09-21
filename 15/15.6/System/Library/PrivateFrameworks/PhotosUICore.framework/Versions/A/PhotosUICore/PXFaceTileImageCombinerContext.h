@class NSColor;

@interface PXFaceTileImageCombinerContext : NSObject

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) char isRTL;
@property (readonly, nonatomic) char isAscending;
@property (readonly, nonatomic) double imageSize;
@property (readonly, nonatomic) double imageOffset;
@property (readonly, nonatomic) NSColor *backgroundColor;
@property (readonly, nonatomic) NSColor *borderColor;
@property (readonly, nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)initWithDisplayScale:(double)a0 isRTL:(char)a1 isAscending:(char)a2 imageSize:(double)a3 imageOffset:(double)a4 backgroundColor:(id)a5 borderColor:(id)a6 borderWidth:(double)a7;

@end
