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

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned int)a0;
- (id)bookmarkAtIndex:(unsigned int)a0;
- (id)bookmarkArray;
- (id)differenceFromList:(id)a0 withOptions:(unsigned long long)a1;
- (id)_arrayForDifferenceCalculation;
- (id)_bookmarkAtIndex:(unsigned int)a0 paginate:(char)a1 skipDecodingSyncData:(char)a2;
- (void)_loadBookmarksForDifferenceFromList:(id)a0;
- (void)_moveBookmarkAtIndex:(unsigned int)a0 toIndex:(unsigned int)a1;
- (unsigned int)_primaryBookmarkCount;
- (unsigned int)_reverseOrderIndex:(unsigned int)a0;
- (id)bookmarkArrayRequestingCount:(unsigned int)a0;
- (id)bookmarkArraySkippingDecodeSyncData;
- (id)bookmarkAtIndex:(unsigned int)a0 skipDecodingSyncData:(char)a1;
- (id)initWithQuery:(id)a0 skipOffset:(unsigned int)a1 collection:(id)a2;
- (id)initWithQuery:(id)a0 skipOffset:(unsigned int)a1 collection:(id)a2 queue:(id)a3;

@end
