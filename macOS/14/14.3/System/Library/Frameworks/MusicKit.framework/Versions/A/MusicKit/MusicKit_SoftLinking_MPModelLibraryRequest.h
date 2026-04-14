@class NSArray, NSString;

@interface MusicKit_SoftLinking_MPModelLibraryRequest : MusicKit_SoftLinking_MPModelRequest

@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (copy, nonatomic) NSString *itemFilterText;
@property (copy, nonatomic) NSString *sectionFilterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) id underlyingRequest;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithLegacyModelObject:(id)a0 itemType:(long long)a1 properties:(id)a2 relationships:(id)a3;
- (id)initWithLegacyModelObjectType:(long long)a0 itemKind:(id)a1 allowedItemIdentifiers:(id)a2 itemSortDescriptors:(id)a3 itemFilterText:(id)a4 itemPropertyFilters:(id)a5 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 filteringOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })a7 mediaLibrary:(id)a8;
- (id)initWithLegacyModelObjectType:(long long)a0 sectionLegacyModelObjectType:(long long)a1 itemKind:(id)a2 sectionKind:(id)a3 allowedItemIdentifiers:(id)a4 allowedSectionIdentifiers:(id)a5 scopedContainers:(id)a6 itemSortDescriptors:(id)a7 sectionSortDescriptors:(id)a8 itemFilterText:(id)a9 sectionFilterText:(id)a10 itemPropertyFilters:(id)a11 sectionPropertyFilters:(id)a12 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a13 filteringOptions:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })a14 mediaLibrary:(id)a15;

@end
