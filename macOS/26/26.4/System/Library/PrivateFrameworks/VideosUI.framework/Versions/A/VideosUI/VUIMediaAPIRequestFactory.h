@interface VUIMediaAPIRequestFactory : NSObject

+ (void)_addTypeFilterToURL:(id *)a0 forRequest:(id)a1;
+ (id)_mutableURLRequestWithURLString:(id)a0;
+ (id)_playbackPositionRequestBodyWithSuggestedTime:(double)a0 isItemComplete:(BOOL)a1 error:(id *)a2;
+ (id)_playbackPositionURLRequestWithAdamID:(id)a0 mediaType:(long long)a1;
+ (id)_purchasesEpisodesEndpoint;
+ (id)_urlAddAdditionalParameter:(id)a0;
+ (id)_urlParameterFilterWithShowIdentifier:(id)a0;
+ (id)_urlParameterForAdditionalParameters;
+ (id)_urlParameterForExtend:(id)a0;
+ (id)_urlParameterForInclude:(id)a0;
+ (id)_urlParameterForIncludeType:(id)a0 includeRelationship:(id)a1;
+ (id)_urlParameterForLimit:(id)a0;
+ (id)_urlParameterForSort:(id)a0;
+ (id)_urlParameterTypeFilterWithTypes:(id)a0;
+ (id)_urlParameterWithGenreFilter:(id)a0;
+ (id)_urlParameterWithGenreIDsFilter:(id)a0;
+ (id)_urlParameterWithOwnerIdentifier:(id)a0;
+ (id)_urlParameterWithSharedPurchases;
+ (id)_urlRequestWithURLString:(id)a0;
+ (id)episodesRequestWithShowIdentifier:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)familyMembersRequest;
+ (id)genresRequestForVUIFamilySharingGenre:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)genresRequestForVUIFamilySharingGenreIDsFilter:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)genresRequestWithOwnerIdentifier:(id)a0;
+ (id)moviesPurchasesRequestWithOwnerIdentifier:(id)a0 sortType:(unsigned long long)a1;
+ (id)readPlaybackPositionRequestWithAdamID:(id)a0 type:(long long)a1;
+ (id)recentPurchasesRequestWithOwnerIdentifier:(id)a0;
+ (id)seasonsRequestWithShowIdentifier:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)showsPurchasesRequestWithOwnerIdentifier:(id)a0 sortType:(unsigned long long)a1;
+ (id)writePlaybackPositionRequestWithAdamID:(id)a0 type:(long long)a1 elapsedTime:(double)a2 isItemComplete:(BOOL)a3 error:(id *)a4;

@end
