@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) BOOL hasCustomCornerRounding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)reuseIdentifier;
- (id)nextCard;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)supportsCustomUserReportRequestAfforance;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)horizontalRowModel;
- (id)punchouts;
- (BOOL)anyCardSectionsAreTappable:(id)a0;
- (BOOL)anyCardSectionsHaveNextCards:(id)a0;
- (BOOL)isQuerySuggestion;
- (Class)cellViewClass;
- (id)fallbackCardSectionForCompactResult;
- (BOOL)isTappable;
- (id)dragTitle;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragURL;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)hasLeadingImage;
- (BOOL)prefersNoSeparatorAbove;
- (Class)collectionViewCellClass;

@end
