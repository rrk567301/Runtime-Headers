@class CSSearchableItem, EMMessageObjectID;

@interface MUISearchSuggestionResult : NSObject

@property (copy, nonatomic) CSSearchableItem *searchableItem;
@property (copy, nonatomic) EMMessageObjectID *objectID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSearchableItem:(id)a0 objectID:(id)a1;

@end
