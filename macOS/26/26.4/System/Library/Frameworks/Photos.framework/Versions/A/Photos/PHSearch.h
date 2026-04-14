@interface PHSearch : NSObject

+ (id)spotlightContentRatingFromPhotosSceneClassifications:(id)a0 algorithmVersion:(long long)a1;
+ (id)spotlightSceneClassificationsFromDetectionTraits:(id)a0;
+ (id)spotlightSceneClassificationsFromPhotosSceneClassifications:(id)a0 algorithmVersion:(long long)a1;
+ (id)spotlightTextLinesFromDocumentObservation:(id)a0 algorithmVersion:(long long)a1;
+ (void)updateSearchableItemAttributeSet:(id)a0 withIdentificationDocument:(id)a1;

@end
