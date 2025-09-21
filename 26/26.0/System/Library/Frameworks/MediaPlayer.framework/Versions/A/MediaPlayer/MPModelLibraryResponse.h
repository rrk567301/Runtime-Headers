@class NSArray, MPMediaLibraryConnectionAssertion;

@interface MPModelLibraryResponse : MPModelResponse

@property (copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion;

- (void)clearResults;
- (id)initWithRequest:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)a0 responseHandler:(id /* block */)a1;

@end
