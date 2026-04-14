@class MKPlaceCardActionItem;
@protocol MKActionRowItemViewDelegate;

@interface MKActionRowItemButton : NSButton

@property (weak, nonatomic) id<MKActionRowItemViewDelegate> delegate;
@property (retain, nonatomic) MKPlaceCardActionItem *actionRowItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handlePress;
- (id)initWithActionRowItem:(id)a0 delegate:(id)a1;

@end
