@class NSString, NSArray, NSMutableSet, NSDictionary, NSMutableArray;

@interface PXSearchResultsSection : NSObject

@property (readonly, nonatomic) NSMutableArray *mutableSearchResults;
@property (nonatomic, getter=isSorted) char sorted;
@property (readonly, nonatomic) NSMutableSet *mutableSearchResultUUIDs;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *searchResults;
@property (readonly, nonatomic, getter=isExpandable) char expandable;
@property (nonatomic, getter=isExpanded) char expanded;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) unsigned long long sectionType;
@property (readonly, nonatomic) unsigned long long visibleCount;
@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly) NSDictionary *debugDictionary;

+ (unsigned long long)_sectionTypeForCategory:(unsigned long long)a0;
+ (id)_stringForCategory:(unsigned long long)a0;
+ (id)sectionTitleForCategoryMask:(unsigned long long)a0;
+ (unsigned long long)sectionTypeForCategoryMask:(unsigned long long)a0 isMomentSection:(char)a1 isTopAssetSection:(char)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addSearchResult:(id)a0;
- (id)initWithTitle:(id)a0 withSectionType:(unsigned long long)a1;
- (unsigned long long)maxVisibleItemsInCollapsedSection;
- (void)removeSearchResult:(id)a0;

@end
