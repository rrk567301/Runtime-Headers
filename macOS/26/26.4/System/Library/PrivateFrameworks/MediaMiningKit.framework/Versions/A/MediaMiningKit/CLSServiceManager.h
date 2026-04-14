@class CLSRoutineService, NSString, CLSSocialServiceContacts, CLSSocialServiceCoreNameParser, CLSSocialServiceCalendar, CLSPersonIdentity, CLSLRUMemoryCache;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate> {
    CLSSocialServiceContacts *_contactsService;
    CLSSocialServiceCalendar *_calendarService;
    CLSSocialServiceCoreNameParser *_coreNameParserService;
    CLSLRUMemoryCache *_personsCache;
}

@property (retain, nonatomic) CLSPersonIdentity *mePerson;
@property (readonly) CLSRoutineService *routineService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAccessContactsStore;
+ (id)locationCacheForSwiftOnlyWithParentURL:(id)a0;

- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (id)personForPersonHandle:(id)a0;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)numberOfRemoteLocationMatches;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (void)invalidatePermanentMemoryCaches;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)mePersonFetchContactIfNeeeded:(BOOL)a0;
- (unsigned long long)relationshipHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)contactsForIdentifiers:(id)a0;
- (id)personForName:(id)a0 inPhotoLibrary:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (id)mePersonAddressesOfType:(unsigned long long)a0;
- (id)initWithLocationCache:(id)a0;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(BOOL)a1;
- (id)mePersonForGraphIngest;
- (unsigned long long)sexHintForPerson:(id)a0 usingLocales:(id)a1;
- (id)fetchImportantLocationsOfInterest;
- (id)personsInContactStoreForContactIdentifiers:(id)a0 needsRefetching:(BOOL)a1 progressBlock:(id /* block */)a2;
- (BOOL)hasAddressesForMePerson;
- (id)initForSwiftOnlyWithAnonymousLocationCache:(id)a0;
- (id)personForIdentifier:(id)a0;
- (void)invalidateMePerson;
- (void)invalidatePersonsCacheForPersonsWithContactIdentifiers:(id)a0;
- (unsigned long long)fetchFinerGranularityBusinessItemNumberForVisitIdentifier:(id)a0;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (void)invalidateMomentaryMemoryCaches;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)a0;
- (id)predominantLocationMobilityForDateInterval:(id)a0 confidence:(double *)a1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (BOOL)routineIsAvailable;
- (unsigned long long)numberOfTimeMatches;
- (unsigned long long)numberOfCloseByLocationMatches;
- (id)lastLocationOfInterestVisit;
- (unsigned long long)numberOfVisits;
- (void)invalidateCacheForPersonInContactStoreWithContactIdentifiers:(id)a0;
- (id)eventsForClueCollection:(id)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)inferredDeviceOwnerForPhotoLibrary:(id)a0 ignoreContactLinking:(BOOL)a1;
- (void)enumeratePersonsForFullname:(id)a0 usingBlock:(id /* block */)a1;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (unsigned long long)numberOfLocationsOfInterest;
- (unsigned long long)numberOfMatchRequests;
- (double)pinningVisitsRatio;
- (id)personResultForName:(id)a0 inPhotoLibrary:(id)a1;
- (id)eventsForDates:(id)a0;

@end
