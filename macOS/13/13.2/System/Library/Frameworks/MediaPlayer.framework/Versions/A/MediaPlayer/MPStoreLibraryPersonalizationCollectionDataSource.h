@class NSString, MPPropertySet, MPMediaLibraryView, NSDictionary, MPMediaLibraryEntityTranslationContext, NSMutableDictionary, MPSectionedCollection, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
}

@property (retain, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPPropertySet *itemProperties;
@property (copy, nonatomic) MPPropertySet *sectionProperties;
@property (copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (retain, nonatomic) MPMediaLibraryEntityTranslationContext *translatingContext;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse;
@property (retain, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 libraryPlaybackPosition:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)a0 identifiers:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedLyricsWithUnpersonalizedLyrics:(id)a0 libraryLyrics:(id)a1 identifiers:(id)a2 personalizationProperties:(id)a3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)a0 libraryAsset:(id)a1 personalizationProperties:(id)a2;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)a0 libraryObject:(id)a1 personalizationProperties:(id)a2 overrideLibraryAddedStatus:(long long)a3;
+ (id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)a0 requestedProperties:(id)a1;
+ (id)_completePersonalizedObjectWithLibraryObject:(id)a0 personalizationProperties:(id)a1 overrideLibraryAddedStatus:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)_libraryObjectWithRelativeModelClass:(Class)a0 identifierSet:(id)a1 propertySet:(id)a2;

@end
