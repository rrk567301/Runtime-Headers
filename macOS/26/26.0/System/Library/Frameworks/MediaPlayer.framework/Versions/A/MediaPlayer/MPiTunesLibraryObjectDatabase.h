@class ITLibrary;

@interface MPiTunesLibraryObjectDatabase : NSObject {
    ITLibrary *_library;
}

@property (nonatomic) BOOL playParamsContainStartItem;
@property (nonatomic) BOOL hasRadioItem;

- (id)init;
- (void).cxx_destruct;
- (id)_itLibKindWithRequestModelKind:(id)a0;
- (id)_allowedIdentifiersForITLibRequestFromRequestIdentifiers:(id)a0 modelKind:(id)a1;
- (id)_allowedItemIdentifiersForIdentifierSets:(id)a0;
- (id)_itLibIdentifierSetFromMPIdentifierSet:(id)a0 modelKind:(id)a1;
- (BOOL)_mediaItem:(id)a0 matchesPlayParametersValues:(id)a1;
- (id)modelObjectMatchingIdentifierSet:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (id)modelObjectsForPlayerPlayParameters:(id)a0 withStartItemPlayParams:(id)a1;

@end
