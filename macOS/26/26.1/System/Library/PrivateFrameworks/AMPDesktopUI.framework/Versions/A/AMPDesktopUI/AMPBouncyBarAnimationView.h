@class NSColor;

@interface AMPBouncyBarAnimationView : NSView

@property (retain, nonatomic) NSColor *_contentTintColor;
@property (copy, nonatomic) NSColor *contentTintColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void).cxx_destruct;
- (void)updateLayer;
- (id)init;
- (BOOL)wantsUpdateLayer;

@end
