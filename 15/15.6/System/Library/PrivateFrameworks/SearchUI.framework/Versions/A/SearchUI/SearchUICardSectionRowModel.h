@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) char isInline;
@property (nonatomic) char isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) struct CGSize { double width; double height; } minimumLayoutSize;
@property (nonatomic) char shouldFillAvailableSpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)reuseIdentifier;
- (id)accessibilityIdentifier;
- (id)contactIdentifiers;
- (id)nextCard;
- (char)isDraggable;
- (int)separatorStyle;
- (id)dragURL;
- (char)hasLeadingImage;
- (char)allowsAppEntityAnnotation;
- (char)anyCardSectionsAreTappable:(id)a0;
- (char)anyCardSectionsHaveNextCards:(id)a0;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)fallbackCardSectionForCompactResult;
- (char)fillsBackgroundWithContent;
- (id)horizontalRowModel;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(char)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (char)isFocusable;
- (char)isQuerySuggestion;
- (char)isTappable;
- (char)prefersNoSeparatorAbove;
- (id)punchouts;
- (char)supportsCustomUserReportRequestAfforance;

@end
