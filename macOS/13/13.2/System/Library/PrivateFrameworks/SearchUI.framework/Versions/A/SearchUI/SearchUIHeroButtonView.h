@class SearchUIImageView, NSString, SFButtonItem, NUIContainerStackView, TLKLabel, SearchUICardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHeroButtonView : TLKSButton

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *symbolName;
@property (retain, nonatomic) TLKLabel *textLabel;
@property (retain, nonatomic) SearchUIImageView *customImageView;
@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (retain, nonatomic) SFButtonItem *buttonItem;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUICardSectionRowModel *rowModel;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)menuForEvent:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)setSFImage:(id)a0;

@end
