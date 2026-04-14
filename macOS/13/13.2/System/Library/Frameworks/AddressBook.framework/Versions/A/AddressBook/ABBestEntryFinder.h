@class NSArray, NSMutableArray, ABAddressBook;

@interface ABBestEntryFinder : NSObject {
    NSArray *_entries;
    NSArray *_searchTerms;
    int _highestScore;
    NSMutableArray *_highestScoringEntries;
    ABAddressBook *_addressBook;
}

+ (id)findBestEntryIn:(id)a0 matchingSearchString:(id)a1 inAddressBook:(id)a2;

- (void).cxx_destruct;
- (id)initWithEntries:(id)a0 searchString:(id)a1 inAddressBook:(id)a2;
- (id)findBestEntry;
- (void)findEntriesWithHighestScore;
- (void)updateHighestScoringEntriesWithEntry:(id)a0;
- (int)scoreForEntry:(id)a0;
- (int)scoreForString:(id)a0;
- (BOOL)string:(id)a0 hasCaseInsensitivePrefix:(id)a1;
- (void)sortEntriesByMostRecentlyViewed;
- (id)viewedDatesForEntries:(id)a0;
- (id)viewDatesForEntries:(id)a0 paths:(id)a1;
- (id)viewedDatesForEntries:(id)a0 metadataItems:(struct __CFArray { } *)a1;
- (id)viewDateOfMetadataItem:(struct __MDItem { } *)a0;

@end
