@class NSColor;

@interface _VUIMonogramDecorator : VUIImageScaleDecorator

@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (char)needsAlphaForImage:(id)a0;

@end
