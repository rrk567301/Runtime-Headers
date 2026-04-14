@class NSString, ICURLAggregatedPerformanceMetrics, MPSectionedCollection, MPPropertySet;
@protocol MPObjectDatabaseProgressiveContext, MPObjectDatabase;

@interface MPCModelStorePlaybackItemsRequestAccumulation : NSObject <MPLazySectionedCollectionDataSource> {
    MPSectionedCollection *_progressiveResults;
    MPPropertySet *_fullObjectPropertySet;
    id<MPObjectDatabase> _sod;
    id<MPObjectDatabaseProgressiveContext> _sodFullObjectContext;
    id<MPObjectDatabase> _lod;
    id<MPObjectDatabaseProgressiveContext> _lodFullObjectContext;
    id<MPObjectDatabaseProgressiveContext> _lodPersonalizationContext;
    id<MPObjectDatabaseProgressiveContext> _lodMissingObjectsContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalid;
    id /* block */ _onInvalidate;
}

@property (readonly, copy, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, nonatomic) BOOL isInvalid;
@property (copy, nonatomic) id /* block */ onInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)_objectForProgressiveResult:(id)a0;
- (id)initWithProgressiveResults:(id)a0 properties:(id)a1 libraryObjectDatabase:(id)a2 performanceMetrics:(id)a3;

@end
