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

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithLegacyModelObjectType:(long long)a0 sectionLegacyModelObjectType:(long long)a1 itemKind:(id)a2 sectionKind:(id)a3 allowedItemIdentifiers:(id)a4 allowedSectionIdentifiers:(id)a5 scopedContainers:(id)a6 itemSortDescriptors:(id)a7 sectionSortDescriptors:(id)a8 itemFilterText:(id)a9 sectionFilterText:(id)a10 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 wantsDetailedKeepLocalRequestableResponse:(BOOL)a12 downloadedContentOnly:(BOOL)a13;
- (id)initWithLegacyModelObjectType:(long long)a0 itemKind:(id)a1 allowedItemIdentifiers:(id)a2 itemSortDescriptors:(id)a3 itemFilterText:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 wantsDetailedKeepLocalRequestableResponse:(BOOL)a6 downloadedContentOnly:(BOOL)a7;

@end
