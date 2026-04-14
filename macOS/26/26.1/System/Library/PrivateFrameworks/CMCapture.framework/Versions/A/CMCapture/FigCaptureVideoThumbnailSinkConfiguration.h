@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *smartStyles;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)dealloc;
- (int)sinkType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
