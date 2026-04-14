@class NSArray, ITLibModelKind;

@interface ITLibRequest : NSObject

@property (retain, nonatomic) ITLibModelKind *libModelKindItem;
@property (retain, nonatomic) ITLibModelKind *libModelKindSection;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic) BOOL needsTitledSections;
@property (copy, nonatomic) NSArray *itemPropertyFilters;
@property (copy, nonatomic) NSArray *sectionPropertyFilters;

- (void).cxx_destruct;
- (unsigned long long)_filteringOptions;
- (id)_ampLibModelKindWithRequestModelKind:(id)a0;
- (id)_ampPropertyFiltersFromITPropertyFilters:(id)a0;
- (BOOL)_isSectioned;
- (id)_setupScopedContainers;
- (id)setupAMPLibRequest;
- (id)setupItemsAMPLibRequestWithItemIDs:(id)a0;

@end
