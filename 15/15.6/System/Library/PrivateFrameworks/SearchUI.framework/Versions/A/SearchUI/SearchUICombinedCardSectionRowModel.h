@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;
@property (readonly) NSArray *snippetUICardSections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)reuseIdentifier;
- (void)setIsTopHit:(char)a0;
- (id)cardSection;
- (id)nextCard;
- (char)isDraggable;
- (int)separatorStyle;
- (id)dragURL;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 cardSection:(id)a2 dataSourceIdentifier:(id)a3;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1 dataSourceIdentifier:(id)a2;
- (char)isTappable;
- (id)punchouts;

@end
