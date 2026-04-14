@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)cardSection;
- (id)nextCard;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (id)dragURL;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (BOOL)isTappable;
- (id)punchouts;

@end
