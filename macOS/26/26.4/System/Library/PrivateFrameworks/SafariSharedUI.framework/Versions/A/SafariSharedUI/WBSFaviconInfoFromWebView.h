@class NSString, NSArray, NSData;

@interface WBSFaviconInfoFromWebView : NSObject

@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, copy, nonatomic) NSArray *availableImageSizes;
@property (readonly, nonatomic) BOOL isMultiResolution;
@property (readonly, nonatomic) BOOL isSVGImage;
@property (readonly, copy, nonatomic) NSData *multiResolutionImageData;
@property (readonly, nonatomic) BOOL didGenerateResolutions;

- (void).cxx_destruct;
- (id)initWithImageType:(id)a0 availableImageSizes:(id)a1;
- (id)initWithImageType:(id)a0 availableImageSizes:(id)a1 multiResolutionImageData:(id)a2 didGenerateResolutions:(BOOL)a3;

@end
