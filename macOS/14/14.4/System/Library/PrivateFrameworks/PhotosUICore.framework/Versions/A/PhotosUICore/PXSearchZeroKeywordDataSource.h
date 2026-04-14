@class PLSearchIndexSceneTaxonomyProvider, NSArray, NSObject;
@protocol OS_dispatch_queue, PXSearchZeroKeywordChangeDelegate;

@interface PXSearchZeroKeywordDataSource : NSObject

@property (nonatomic) BOOL fetchInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<PXSearchZeroKeywordChangeDelegate> delegate;

+ (id)zeroKeywordLog;
+ (id)_dateViewModelForKeywordDictionary:(id)a0;
+ (id)_holidayViewModelForKeywordDictionary:(id)a0;
+ (id)_homeViewModelForKeywordDictionary:(id)a0;
+ (id)_meaningViewModelForKeywordDictionary:(id)a0;
+ (id)_personViewModelForKeywordDictionary:(id)a0 person:(id)a1;
+ (id)_personsByLocalIdentifiers:(id)a0 allUniqueLocalIdentifiers:(id)a1;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_regionFromDisplayInfo:(id)a0;
+ (id)_sceneViewModelForKeywordDictionary:(id)a0 sceneTaxonomyProvider:(id)a1;
+ (id)_seasonViewModelForKeywordDictionary:(id)a0;
+ (id)_sectionsForZeroKeywords:(id)a0 personsByLocalIdentifier:(id)a1 sceneTaxonomyProvider:(id)a2;
+ (id)_socialGroupViewModelForKeywordDictionary:(id)a0 peopleByKeyword:(id)a1;
+ (id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)a0 socialGroupZeroKeywords:(id)a1;
+ (id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)a0;
+ (id)placeViewModelForKeywordDictionary:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)titleForSection:(unsigned long long)a0;
- (id)debugDictionary;
- (BOOL)hasZeroKeywords;
- (BOOL)_shouldFetchItems;
- (id)_titleForPeopleSection:(unsigned long long)a0;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (void)blockingFetchItems;
- (void)fetchItems;
- (void)fetchItems:(BOOL)a0;
- (long long)indexForPlaceKey:(id)a0;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (long long)sectionForSectionType:(long long)a0;
- (long long)sectionTypeForSection:(unsigned long long)a0;
- (id)tapToRadarAttachments;
- (id)viewModelForIndexPath:(id)a0;
- (id)viewModelsForSection:(long long)a0;

@end
