@interface PGPeopleWallpaperSuggesterFilteringContext : PGSinglePersonWallpaperAssetSuggesterFilteringContext

@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) char favoritePersonsAreVIPs;
@property (nonatomic) long long minimumPersonImportance;
@property (nonatomic) unsigned long long minimumNumberOfCandidatesForEligiblePerson;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)_commonInitForPeople;
- (id)initForAmbient;
- (id)initForCameraStyleable;
- (id)initForPeopleInOrientation:(long long)a0;
- (id)initForTopPeople:(char)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPeopleInOrientation:(long long)a0;
- (void)updateFilteringContextWithDictionary:(id)a0;

@end
