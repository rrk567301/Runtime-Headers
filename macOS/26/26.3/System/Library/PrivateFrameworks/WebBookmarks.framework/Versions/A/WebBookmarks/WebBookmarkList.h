@class WebBookmarkListQuery, WebBookmarkCollection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WebBookmarkList : NSObject {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned int bookmarkCount;
@property (readonly, nonatomic) int folderID;
@property (retain, nonatomic) WebBookmarkList *shadowBookmarkList;

- (id)bookmarkArrayRequestingCount:(unsigned int)a0;
- (id)objectAtIndexedSubscript:(unsigned int)a0;
- (id)bookmarksSortedByDateWithLimit:(unsigned int)a0;
- (id)initWithQuery:(id)a0 skipOffset:(unsigned int)a1 collection:(id)a2;
- (id)bookmarkAtIndex:(unsigned int)a0;
- (unsigned int)_reverseOrderIndex:(unsigned int)a0;
- (id)initWithQuery:(id)a0 skipOffset:(unsigned int)a1 collection:(id)a2 queue:(id)a3;
- (id)differenceFromList:(id)a0 withOptions:(unsigned long long)a1;
- (id)_bookmarkAtIndex:(unsigned int)a0 paginate:(BOOL)a1 skipDecodingSyncData:(BOOL)a2;
- (id)bookmarkArray;
- (void)loadBookmarksArraySortedByDateAsynchronously:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_sortedBookmarksByDateAdded;
- (void)_loadBookmarksForDifferenceFromList:(id)a0;
- (id)bookmarkArraySkippingDecodeSyncData;
- (id)_arrayForDifferenceCalculation;
- (id)bookmarkAtIndex:(unsigned int)a0 skipDecodingSyncData:(BOOL)a1;
- (void)_moveBookmarkAtIndex:(unsigned int)a0 toIndex:(unsigned int)a1;
- (unsigned int)_primaryBookmarkCount;

@end
