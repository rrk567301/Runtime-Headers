@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : NSButton

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;

@end
