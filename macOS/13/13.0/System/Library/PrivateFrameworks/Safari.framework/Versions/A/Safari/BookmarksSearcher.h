@class NSString, SafariWebBookmark, WBSSiriIntelligenceHistorySearch, NSMutableArray;

@interface BookmarksSearcher : NSObject {
    NSMutableArray *_allMatches;
    struct __CFDictionary { } *_collectionsForMatches;
    WBSSiriIntelligenceHistorySearch *_siriHistorySearch;
}

@property (nonatomic) unsigned long long searchCriteria;
@property (nonatomic) int searchDomain;
@property (retain, nonatomic) SafariWebBookmark *targetCollection;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) BOOL canMatchContainers;
@property (readonly, nonatomic) BOOL hasPerformedSearch;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)sortUsingDescriptors:(id)a0;
- (id)matches;
- (id)collectionForMatch:(id)a0;
- (void)performSearch;
- (void)performSearchWithCompletionHandler:(id /* block */)a0;
- (void)_collectSearchResultsMatchingStrings:(id)a0 orWithAddressInSet:(id)a1 inCollection:(id)a2;
- (void)_resetResults;

@end
