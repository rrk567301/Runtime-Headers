@class NSOrderedSet, TSAGalleryItem;

@interface TSAGalleryItemSelection : TSKSelection

@property (readonly, nonatomic) TSAGalleryItem *displayedItem;
@property (readonly, nonatomic) NSOrderedSet *items;

+ (Class)archivedSelectionClass;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)UUIDDescription;
- (id)initWithItems:(id)a0 displayedItem:(id)a1;

@end
