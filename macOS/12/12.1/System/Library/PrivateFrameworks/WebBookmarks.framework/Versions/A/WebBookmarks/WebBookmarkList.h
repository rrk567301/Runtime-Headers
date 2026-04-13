@class WebBookmarkListQuery, NSMutableArray, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
}

@property (readonly, nonatomic) int folderID;

- (void).cxx_destruct;
- (id)bookmarkAtIndex:(unsigned int)a0;
- (id)bookmarkArray;
- (id)initWithQuery:(id)a0 skipOffset:(unsigned int)a1 collection:(id)a2;
- (unsigned int)bookmarkCount;
- (void)_moveBookmarkAtIndex:(unsigned int)a0 toIndex:(unsigned int)a1;
- (unsigned int)_reverseOrderIndex:(unsigned int)a0;
- (id)_bookmarkAtIndex:(unsigned int)a0 paginate:(BOOL)a1;
- (void)_loadBookmarksForDifferenceFromList:(id)a0;
- (id)_arrayForDifferenceCalculation;
- (id)bookmarkArrayRequestingCount:(unsigned int)a0;
- (id)differenceFromList:(id)a0 withOptions:(unsigned long long)a1;

@end
