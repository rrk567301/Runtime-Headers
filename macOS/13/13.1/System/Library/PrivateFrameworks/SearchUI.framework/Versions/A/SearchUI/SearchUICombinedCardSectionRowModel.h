@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)nextCard;
- (id)cardSection;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (id)punchouts;
- (Class)cellViewClass;
- (BOOL)isTappable;
- (id)dragTitle;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragURL;
- (Class)collectionViewCellClass;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)firstRowModel;

@end
