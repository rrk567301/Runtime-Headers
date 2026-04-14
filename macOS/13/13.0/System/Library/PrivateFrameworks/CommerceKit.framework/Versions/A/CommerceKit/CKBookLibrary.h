@class NSArray, CKStoreDAAPLibrary, NSMutableDictionary, NSPredicate, NSString;
@protocol CKBookLibraryDelegate;

@interface CKBookLibrary : NSObject <CKStoreDAAPLibraryObserver>

@property (readonly) CKStoreDAAPLibrary *library;
@property (retain) NSMutableDictionary *observers;
@property (retain) id token;
@property (readonly) long long libraryType;
@property (copy) NSArray *sortDescriptors;
@property (copy) NSPredicate *searchPredicate;
@property (weak, nonatomic) id<CKBookLibraryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedDAAPLibrary;
+ (id)titleSortDescriptors;
+ (id)authorSortDescriptors;
+ (id)categorySortDescriptors;
+ (id)shelfSortDescriptors;
+ (BOOL)hasSampleWithItemIdentifier:(id)a0 returningMetadata:(id *)a1;

- (void).cxx_destruct;
- (id)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)storeDAAPLibrary:(id)a0 addedItems:(id)a1 removedItems:(id)a2;
- (id)initWithLibraryType:(long long)a0;
- (unsigned long long)countOfBooks;
- (id)booksAtIndexes:(id)a0;
- (id)objectInBooksAtIndex:(unsigned long long)a0;
- (id)_filteredAndSortedPurchasedItems;
- (id)_filteredAndSortedLocalItems;
- (id)bookWithItemIdentifier:(unsigned long long)a0;
- (id)_localBooks;
- (id)_bookFromDAAPItem:(id)a0;
- (void)pollForPurchasedBooks;

@end
