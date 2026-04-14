@class MPModelLibraryRequest, ITLibrary;

@interface MPModeliTunesLibraryRequestOperation : MPAsyncOperation {
    ITLibrary *_library;
}

@property (copy, nonatomic) MPModelLibraryRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (id)_itLibKindWithRequestModelKind:(id)a0;
- (id)_itemProperties;
- (id)_additionalPropertyFilterForFilterText:(id)a0;
- (id)_allowedIdentifiersForITLibRequestFromRequestIdentifiers:(id)a0;
- (id)_defaultItemProperties;
- (BOOL)_isSectionedRequest;
- (unsigned long long)_itLibRequestFilteringOptions;
- (id)_itemPropertyFilters;
- (id)_propertyFiltersForITLibRequestFromLibraryRequestPropertyFilters:(id)a0;
- (id)_sectionPropertyFilters;
- (void)_setScopedContainersForITLibRequest:(id)a0;
- (id)_sortDescriptorsForITLibRequestFromSortDescriptors:(id)a0;
- (id)_sortDescriptorsForTitledSectionRequestForModelKind:(id)a0;

@end
