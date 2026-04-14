@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : NSButton

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (void)mouseUp:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;

@end
