@protocol FASharingTransportItemViewDelegate;

@interface FASharingTransportItemView : NSView

@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak, nonatomic) id<FASharingTransportItemViewDelegate> selectionDelegate;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;

@end
