@class AKBezelFreeButton_Mac, NSVisualEffectView;

@interface AKGridViewBox : NSView

@property (nonatomic) char lastItem;
@property char showsSelectionState;
@property (nonatomic) char transparent;
@property (readonly, nonatomic) NSVisualEffectView *selectionIndicator;
@property (readonly, nonatomic) AKBezelFreeButton_Mac *button;

@end
