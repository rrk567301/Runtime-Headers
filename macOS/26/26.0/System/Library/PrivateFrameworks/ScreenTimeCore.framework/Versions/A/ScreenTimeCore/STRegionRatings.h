@class NSString, NSDictionary;
@protocol STStorefrontClientProtocol;

@interface STRegionRatings : NSObject

@property (class, readonly) STRegionRatings *sharedRatings;

@property (copy, nonatomic) NSString *storefront;
@property (retain, nonatomic) id<STStorefrontClientProtocol> storefrontClient;
@property (retain, nonatomic) NSDictionary *regionRatingsData;
@property (readonly, copy) NSString *preferredRegion;

+ (void)loadRegionRatingsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadRegionRatingsWithOptions:(id)a0 storefrontClient:(id)a1 managementState:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)localizedMovieRatingsForRegion:(id)a0;
- (void)_loadRegionRatingsDataForStorefront:(id)a0 includeUnrated:(BOOL)a1 managementState:(id)a2 completionHandler:(id /* block */)a3;
- (void)_loadRegionRatingsDataWithOptions:(id)a0 managementState:(id)a1 completionHandler:(id /* block */)a2;
- (id)_localizedLabelForRegion:(id)a0 rating:(id)a1;
- (id)_localizedRatingsForRegion:(id)a0 type:(id)a1 includeAllContentKey:(BOOL)a2;
- (id)_overrideValueForString:(id)a0;
- (id)getClosestRestrictionMatch:(id)a0 within:(id)a1 forPayloadKey:(id)a2;
- (id)getRatingSystemTypeFrom:(id)a0;
- (id)initWithStorefrontClient:(id)a0;
- (id)localizedAppRatingsForRegion:(id)a0;
- (id)localizedStringForAppRatingLabel:(id)a0;
- (id)localizedTVRatingsForRegion:(id)a0;
- (id)ratingValuesByRatingSystemType;

@end
