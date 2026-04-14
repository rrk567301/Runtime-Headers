@class NUIContainerBoxView, NSView, NUIContainerStackView, SearchUILabel;

@interface SearchUIColorBarCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (retain, nonatomic) NUIContainerBoxView *multilineTopTextLabelContainer;
@property (retain, nonatomic) NSView *colorBarView;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *spacerTextLabel;
@property (retain, nonatomic) SearchUILabel *topTextlabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
