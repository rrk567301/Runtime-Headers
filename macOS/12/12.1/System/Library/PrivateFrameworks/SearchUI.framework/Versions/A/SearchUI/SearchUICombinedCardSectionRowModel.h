@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)cardSection;
- (id)nextCard;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (id)punchouts;
- (id)dragURL;
- (id)dragTitle;
- (id)dragSubtitle;
- (Class)cellViewClass;
- (BOOL)isTappable;
- (id)dragText;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)firstRowModel;

@end
