@class NSColor;

@interface LPImagePresentationProperties : NSObject

@property (nonatomic) long long filter;
@property (nonatomic) long long scalingMode;
@property (nonatomic) BOOL shouldApplyBackground;
@property (nonatomic) BOOL requireFixedSize;
@property (retain, nonatomic) NSColor *maskColor;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL canAdjustHorizontalPaddingForFixedSize;
@property (retain, nonatomic) NSColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;

@end
