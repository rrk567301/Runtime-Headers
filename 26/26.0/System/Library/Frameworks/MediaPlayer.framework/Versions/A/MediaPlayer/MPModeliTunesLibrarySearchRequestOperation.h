@class NSMutableDictionary, ITLibrary, MPModelLibrarySearchRequest;

@interface MPModeliTunesLibrarySearchRequestOperation : MPAsyncOperation {
    ITLibrary *_library;
    NSMutableDictionary *_scopesMap;
}

@property (copy, nonatomic) MPModelLibrarySearchRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (id)init;
- (void).cxx_destruct;
- (id)_itLibKindWithRequestModelKind:(id)a0;
- (Class)_classForTranslatorForITLibItem:(id)a0;
- (Class)_itemKindClassForTranslatorForITLibItem:(id)a0;
- (id)_propertiesForTranslatorForClass:(Class)a0;
- (id)_searchScopes:(id)a0;

@end
