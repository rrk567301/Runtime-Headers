@class NSColor;

@interface AMPBouncyBarAnimationView : NSView

@property (retain, nonatomic) NSColor *_contentTintColor;
@property (copy, nonatomic) NSColor *contentTintColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;

@end
