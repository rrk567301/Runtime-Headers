@protocol FASharingTransportItemViewDelegate;

@interface FASharingTransportItemView : NSView

@property (nonatomic, getter=isSelected) char selected;
@property (weak, nonatomic) id<FASharingTransportItemViewDelegate> selectionDelegate;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;

@end
