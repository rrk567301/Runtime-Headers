@class NSColor;

@interface AMPBouncyBarAnimationView : NSView

@property (retain, nonatomic) NSColor *_contentTintColor;
@property (copy, nonatomic) NSColor *contentTintColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (void).cxx_destruct;
- (id)init;
- (BOOL)wantsUpdateLayer;

@end
