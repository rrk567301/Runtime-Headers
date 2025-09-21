@interface NSScrubberSelectionStyle : NSObject <NSCoding>

@property (class, readonly) NSScrubberSelectionStyle *outlineOverlayStyle;
@property (class, readonly) NSScrubberSelectionStyle *roundedBackgroundStyle;

+ (id)nonHighlightingOutlineOverlayStyle;
+ (id)roundedBackgroundStyleWithTintColor:(id)a0;
+ (id)selectionStyleWithViewClass:(Class)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)makeSelectionView;

@end
