@class SearchUIImageView, TLKStackView, SFCommandButtonItem, TLKLabel;
@protocol SearchUIInfoValueViewDelegate;

@interface SearchUIInfoValueView : NUIContainerBoxView

@property (retain, nonatomic) TLKLabel *valueLabel;
@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SearchUIImageView *imageView;
@property (weak, nonatomic) id<SearchUIInfoValueViewDelegate> actionDelegate;
@property (retain, nonatomic) SFCommandButtonItem *buttonItem;

- (id)init;
- (void).cxx_destruct;
- (id)menu;
- (void)mouseDown:(id)a0;
- (void)updateHighlightsOnHover:(BOOL)a0;
- (void)updateWithString:(id)a0 image:(id)a1;

@end
