@class LPImage, NSAttributedString, NSColor;

@interface LPCaptionButtonCollapsedPresentationProperties : NSObject

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) double layoutRatioThreshold;
@property (nonatomic) BOOL shouldHideIconsWhenCollapsed;
@property (nonatomic) BOOL shouldCollapseWhenCompressed;

- (void).cxx_destruct;

@end
