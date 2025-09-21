@class CIImage;

@interface PIPortraitHeadroomFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *matteImage;
@property (retain, nonatomic) CIImage *hdrGainMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extendedRect;
@property (nonatomic) BOOL isInactive;
@property (nonatomic) BOOL colorAnalysisOnly;
@property (nonatomic) BOOL skipInpaint;
@property (nonatomic) double renderScale;
@property (nonatomic) unsigned long long classification;

- (id)outputImage;
- (void).cxx_destruct;

@end
