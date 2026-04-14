@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) BOOL hasCustomCornerRounding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)reuseIdentifier;
- (id)nextCard;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)supportsCustomUserReportRequestAfforance;
- (BOOL)anyInlineCardSectionsHavePunchouts;
- (BOOL)anyInlineCardSectionsHaveNextCards;
- (id)fallbackCardSectionForCompactResult;
- (BOOL)isQuerySuggestion;
- (id)punchouts;
- (id)dragURL;
- (id)dragTitle;
- (id)dragSubtitle;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)horizontalRowModel;
- (Class)cellViewClass;
- (BOOL)isTappable;
- (id)dragText;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)hasLeadingImage;
- (BOOL)prefersNoSeparatorAbove;

@end
