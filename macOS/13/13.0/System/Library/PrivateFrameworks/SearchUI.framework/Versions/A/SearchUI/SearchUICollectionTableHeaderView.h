@class NUIContainerStackView, NSString;

@interface SearchUICollectionTableHeaderView : SearchUIResultsTableGroupHeaderCellView <NSCollectionViewElement>

@property (retain, nonatomic) NUIContainerStackView *titleStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setCardSection:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })customEdgeInsets;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1;
- (void)updateWithCollectionCardSection:(id)a0 section:(id)a1 isExpanded:(BOOL)a2;

@end
