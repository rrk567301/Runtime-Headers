@class NSColor, NSImage;

@interface _NSLevelIndicatorAux : NSObject <NSCopying>

@property (copy) NSColor *customFillColor;
@property (copy) NSColor *customWarningFillColor;
@property (copy) NSColor *customCriticalFillColor;
@property (retain) NSImage *customRatingImage;
@property (retain) NSImage *customRatingPlaceholderImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
