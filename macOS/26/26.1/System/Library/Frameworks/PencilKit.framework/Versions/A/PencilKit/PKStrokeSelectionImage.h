@class NSImage, PKStrokeSelectionImageConfig;

@interface PKStrokeSelectionImage : NSObject <NSCopying>

@property (copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImage *combinedImage;
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *config;
@property (readonly, nonatomic) PKStrokeSelectionImageConfig *fullSizeConfig;
@property (retain, nonatomic) NSImage *addImage;
@property (retain, nonatomic) NSImage *mulImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 config:(id)a1 fullSizeConfig:(id)a2;

@end
