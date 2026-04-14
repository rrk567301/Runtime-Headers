@protocol ReadingListTableViewContentProvider;

@interface ContinuousReadingListDataSourceBase : NSObject

@property (readonly, retain, nonatomic) id<ReadingListTableViewContentProvider> contentProvider;

+ (id)continuousReadingListPageItemForReadingListItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithReadingListTableViewContentProvider:(id)a0;
- (id)continuousReadingListPageItemPrecedingPageItem:(id)a0;
- (id)continuousReadingListPageItemFollowingPageItem:(id)a0;

@end
