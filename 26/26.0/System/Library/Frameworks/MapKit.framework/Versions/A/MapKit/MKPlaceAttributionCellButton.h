@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : NSButton

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void).cxx_destruct;

@end
