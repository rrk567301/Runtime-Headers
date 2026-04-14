@interface PLSpotlightTranslatorUtilities : NSObject

+ (void)tagCSSearchableItem:(id)a0 entityInstanceIdentifier:(id)a1 typeIdentifier:(id)a2 typeDisplayName:(id)a3 displayTitle:(id)a4 displaySubtitle:(id)a5 schemaIdentifier:(id)a6;
+ (id)contentRatingFromScenes:(id)a0 algorithmVersion:(short)a1;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1 thumbnailMap:(id)a2 includeDogScenes:(BOOL)a3;
+ (id)spotlightScenesFromDetectionTraits:(id)a0;
+ (long long)CSSceneTypeForPLSceneClassificationType:(long long)a0;
+ (id)spotlightAudioClassificationsFromScenes:(id)a0;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1;
+ (id)seasonsForDate:(id)a0 calendar:(id)a1;
+ (id)spotlightScenesFromDetectionTraits:(id)a0 thumbnailMap:(id)a1;
+ (id)spotlightPersonFromPLPerson:(id)a0 face:(id)a1 fetchHelper:(id)a2;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1 thumbnailMap:(id)a2;

@end
