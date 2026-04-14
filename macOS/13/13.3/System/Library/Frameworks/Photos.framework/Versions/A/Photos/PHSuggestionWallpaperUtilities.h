@interface PHSuggestionWallpaperUtilities : NSObject

+ (id)fetchPortraitAssetsWithOptions:(id)a0;
+ (id /* block */)_assetSortComparatorForPortraitWallpaper;
+ (id)_blockedImportedByBundleIdentifiers;
+ (id)_facePredicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0 deviceAspectRatio:(double)a1;
+ (id)_fetchMeContactIdentifier;
+ (id)_fetchSuggestedMePersonLocalIdentifierInPhotoLibrary:(id)a0;
+ (id)_mostRecentAssetDateInPhotoLibrary:(id)a0;
+ (id)_personFetchOptionsWithPhotoLibrary:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForAsset:(id)a0 classification:(unsigned long long)a1 outputCropScore:(double *)a2 outputLayoutAcceptable:(BOOL *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForAsset:(id)a0 classification:(unsigned long long)a1 outputCropScore:(double *)a2 outputLayoutAcceptable:(BOOL *)a3 layoutConfiguration:(id)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestWallpaperCropForSuggestion:(id)a0 outputCropScore:(double *)a1 outputLayoutAcceptable:(BOOL *)a2;
+ (id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)a0;
+ (id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)a0 passingFilterBlock:(id /* block */)a1 maximumNumberOfTries:(long long)a2;
+ (id)fetchKnownPersonLocalIdentifiersInPhotoLibrary:(id)a0 fetchLimit:(unsigned long long)a1;
+ (id)fetchPersonLocalIdentifiersForSuggestionSubtype:(unsigned short)a0 photoLibrary:(id)a1;
+ (id)fetchWallpaperGallerySuggestionsInPhotoLibrary:(id)a0;
+ (BOOL)hasAnyKnownPersonLocalIdentifierInPhotoLibrary:(id)a0;
+ (id)knownPersonLocalIdentifiersInPhotoLibrary:(id)a0;
+ (unsigned long long)mediaAnalysisTypeForParallaxClassification:(unsigned long long)a0;
+ (unsigned long long)parallaxClassificationForMedia:(id)a0 descriptorType:(long long)a1;
+ (unsigned long long)parallaxClassificationForSuggestionMedia:(id)a0;
+ (unsigned long long)parallaxClassificationForSuggestionSubtype:(unsigned short)a0;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0;
+ (id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)a0 deviceAspectRatio:(double)a1;
+ (id)randomNumberGeneratorForWallpaperDonation;
+ (void)rejectWallpaperSuggestions:(id)a0 completionHandler:(id /* block */)a1;
+ (void)rejectWallpaperSuggestionsUsingAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (void)rejectWallpaperSuggestionsUsingAssetOfSuggestion:(id)a0 completionHandler:(id /* block */)a1;
+ (id)wallpaperGalleryFeaturedPhotoSortedSuggestionsFromSuggestions:(id)a0;
+ (id)wallpaperGallerySmartAlbumSuggestionsFromSuggestions:(id)a0;

@end
