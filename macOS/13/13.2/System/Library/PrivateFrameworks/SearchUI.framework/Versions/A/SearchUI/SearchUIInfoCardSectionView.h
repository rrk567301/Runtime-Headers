@class SFInfoCardSection, NUIContainerGridView, NSString, NSMutableArray;

@interface SearchUIInfoCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUIInfoSizingDelegate>

@property (retain, nonatomic) SFInfoCardSection *section;
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *flowViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (BOOL)containerView:(id)a0 shouldRestartMeasurementDueToCompressionInAxis:(long long)a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;

@end
