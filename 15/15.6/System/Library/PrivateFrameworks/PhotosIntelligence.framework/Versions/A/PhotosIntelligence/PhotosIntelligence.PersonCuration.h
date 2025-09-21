@interface PhotosIntelligence.PersonCuration : NSObject

+ (id)fetchCuratedAssetsForPerson:(id)a0 options:(id)a1 useSummary:(char)a2;
+ (id)fetchCuratedAssetsForSocialGroup:(id)a0 options:(id)a1 useSummary:(char)a2 includeOthersInSocialGroupAssets:(char)a3;

- (id)init;
- (void).cxx_destruct;

@end
