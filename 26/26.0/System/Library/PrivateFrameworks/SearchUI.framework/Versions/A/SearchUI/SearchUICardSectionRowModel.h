@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) struct CGSize { double width; double height; } minimumLayoutSize;
@property (nonatomic) BOOL shouldFillAvailableSpace;

- (int)separatorStyle;
- (id)backgroundImage;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityIdentifier;
- (id)description;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)nextCard;
- (BOOL)isDraggable;
- (BOOL)hasLeadingImage;
- (id)dragURL;
- (BOOL)allowsAppEntityAnnotation;
- (BOOL)anyCardSectionsAreTappable:(id)a0;
- (BOOL)anyCardSectionsHaveNextCards:(id)a0;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)fallbackCardSectionForCompactResult;
- (BOOL)fillsBackgroundWithContent;
- (id)horizontalRowModel;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (BOOL)isFocusable;
- (BOOL)isQuerySuggestion;
- (BOOL)isTappable;
- (BOOL)prefersNoSeparatorAbove;
- (id)punchouts;
- (BOOL)supportsCustomUserReportRequestAfforance;

@end
