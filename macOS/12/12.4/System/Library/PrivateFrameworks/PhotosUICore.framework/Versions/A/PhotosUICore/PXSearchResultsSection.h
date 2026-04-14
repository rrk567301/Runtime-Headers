@class NSString, NSArray, NSMutableSet, NSDictionary, NSMutableArray;

@interface PXSearchResultsSection : NSObject

@property (readonly, nonatomic) NSMutableArray *mutableSearchResults;
@property (nonatomic, getter=isSorted) BOOL sorted;
@property (readonly, nonatomic) NSMutableSet *mutableSearchResultUUIDs;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) unsigned long long sectionType;
@property (readonly, nonatomic) unsigned long long visibleCount;
@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly) NSDictionary *debugDictionary;

+ (unsigned long long)sectionTypeForCategoryMask:(unsigned long long)a0 isMomentSection:(BOOL)a1 isTopAssetSection:(BOOL)a2;
+ (id)_stringForCategory:(unsigned long long)a0;
+ (unsigned long long)_sectionTypeForCategory:(unsigned long long)a0;
+ (id)sectionTitleForCategoryMask:(unsigned long long)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 withSectionType:(unsigned long long)a1;
- (void)addSearchResult:(id)a0;
- (void)removeSearchResult:(id)a0;
- (unsigned long long)maxVisibleItemsInCollapsedSection;

@end
