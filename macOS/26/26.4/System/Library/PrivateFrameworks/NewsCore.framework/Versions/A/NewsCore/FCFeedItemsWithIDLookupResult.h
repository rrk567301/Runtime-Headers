@class NSDictionary, NSArray;

@interface FCFeedItemsWithIDLookupResult : NSObject

@property (retain, nonatomic) NSDictionary *sectionIDsByFeedID;
@property (retain, nonatomic) NSArray *feedItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionIDByFeedID:(id)a0 feedItems:(id)a1;

@end
