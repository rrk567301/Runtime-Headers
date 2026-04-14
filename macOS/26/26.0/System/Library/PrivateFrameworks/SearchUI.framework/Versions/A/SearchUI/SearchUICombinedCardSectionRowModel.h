@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;
@property (readonly) NSArray *snippetUICardSections;

- (int)separatorStyle;
- (id)backgroundImage;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)setIsTopHit:(BOOL)a0;
- (id)cardSection;
- (id)nextCard;
- (BOOL)isDraggable;
- (id)dragURL;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 cardSection:(id)a2 dataSourceIdentifier:(id)a3;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 dataSourceIdentifier:(id)a2;
- (BOOL)isTappable;
- (id)punchouts;

@end
