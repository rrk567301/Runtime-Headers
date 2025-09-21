@class NSMutableDictionary, NSData, ML3DatabaseConnection, NSMutableArray, ML3MusicLibrary;

@interface ML3SortMap : NSObject {
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
    NSMutableDictionary *_nameOrders;
    NSMutableArray *_entries;
    NSData *_minSortKey;
    NSData *_maxSortKey;
    long long _smallestNameDelta;
    char _preloadNames;
}

- (void).cxx_destruct;
- (id)_sortKeyString:(id)a0;
- (char)_insertSortedNameEntriesIntoSortMap:(id)a0;
- (long long)_maxNameOrderForSortMapEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (id)_maxSortKeyForEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (long long)_minNameOrderForSortMapEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (id)_minSortKeyForEntry:(id)a0 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { } *)a1;
- (long long)_sortKeyDistance:(id)a0 sortKey2:(id)a1 offset:(unsigned long long)a2;
- (id)_sortedNameEntriesToInsertForNames:(id)a0;
- (char)attemptInsertStringsIntoSortMap:(id)a0;
- (char)commitFailedInsertedStrings:(id)a0;
- (char)commitUpdates;
- (id)initWithConnection:(id)a0 library:(id)a1 preloadNames:(char)a2;
- (char)insertStringsIntoSortMap:(id)a0 didReSortMap:(char *)a1;
- (char)loadExistingSortedEntries;
- (id)nameOrders;

@end
