@class NSDictionary, PMTitleSubtitleView, NSImage, NSView, NSString, PHAsset, VEKProduction;

@interface PMPosterViewController : NSViewController

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) PMTitleSubtitleView *titleSubtitleView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } landscapeFraming;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitFraming;
@property (nonatomic) BOOL isRotating;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *titleFontName;
@property (weak, nonatomic) VEKProduction *production;
@property (nonatomic) double aspectHorizontal;
@property (nonatomic) double titleScale;
@property (nonatomic) BOOL preventRotation;
@property (nonatomic) double titleSubtitleAlpha;
@property (nonatomic) BOOL memoryTypeDisablesCropping;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;

+ (double)biggestScreenPixelDimension;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)processedImageFromImage:(id)a0;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForImage;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize { double x0; double x1; })a0;
- (void)assignImageFraming;
- (void)fetchImageSomewhatAsynchronously;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForImage;
- (void)fetchImageAsynchronouslyWithCompletion:(id /* block */)a0;
- (void)prewarmFraming;

@end
