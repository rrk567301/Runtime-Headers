@class SearchUIButtonItemFactory, NSMutableArray, NSColor;

@interface SearchUIButtonItemStackView : TLKStackView

@property (retain, nonatomic) SearchUIButtonItemFactory *buttonItemFactory;
@property (retain, nonatomic) NSMutableArray *buttonItemViewControllers;
@property (nonatomic) BOOL shouldReverseButtonOrder;
@property (retain, nonatomic) NSColor *overridenButtonColor;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithButtonItems:(id)a0 maxButtonItems:(unsigned long long)a1 buttonItemViewType:(unsigned long long)a2 rowModel:(id)a3 feedbackDelegate:(id)a4;

@end
