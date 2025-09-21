@class TLKTextButton, SFAttributionFooterCardSection, TLKStackView;

@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKTextButton *leadingTextButton;
@property (retain, nonatomic) TLKTextButton *trailingTextButton;
@property (retain, nonatomic) SFAttributionFooterCardSection *cardSection;

+ (char)prefersNoSeparatorAboveRowModel:(id)a0;
+ (void)removeIconsFromRichText:(id)a0;
+ (char)supportsCustomUserReportRequestAfforance;
+ (char)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)setupContentView;
- (void)configureMenuForTrailingFootnoteButton;
- (void)didPressLeadingTextButton;
- (void)didPressTrailingTextButton:(id)a0;
- (void)setUserInteractionEnabled:(char)a0 forButton:(id)a1;
- (id)setupTextButtonThatIsLeadingAttribution:(char)a0;
- (void)updateAttributionThatIsLeading:(char)a0 withSection:(id)a1 isRTL:(char)a2;
- (void)updateWithRowModel:(id)a0;

@end
