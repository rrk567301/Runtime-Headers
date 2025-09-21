@class NSColor;

@interface LPImagePresentationProperties : NSObject

@property (nonatomic) long long filter;
@property (nonatomic) long long scalingMode;
@property (nonatomic) char shouldApplyBackground;
@property (nonatomic) char requireFixedSize;
@property (retain, nonatomic) NSColor *maskColor;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) char canAdjustHorizontalPaddingForFixedSize;
@property (nonatomic) struct CGSize { double width; double height; } fixedSize;
@property (retain, nonatomic) NSColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;

@end
