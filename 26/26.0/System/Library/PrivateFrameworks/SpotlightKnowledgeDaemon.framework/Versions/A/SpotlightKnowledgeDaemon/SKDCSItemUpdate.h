@class CSSearchableItem;

@interface SKDCSItemUpdate : SKDItemUpdate {
    CSSearchableItem *_searchableItem;
}

@property (readonly, nonatomic) CSSearchableItem *searchableItem;

- (void).cxx_destruct;
- (void)setSearchableItem:(id)a0;

@end
