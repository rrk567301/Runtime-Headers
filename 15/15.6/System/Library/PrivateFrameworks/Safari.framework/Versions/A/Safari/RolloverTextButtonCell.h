@interface RolloverTextButtonCell : NSButtonCell

@property (readonly, nonatomic) char shouldDrawFocusRing;

- (char)_shouldDrawBezel;

@end
