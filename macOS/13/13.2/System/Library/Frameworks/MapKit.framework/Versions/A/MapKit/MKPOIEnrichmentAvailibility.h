@interface MKPOIEnrichmentAvailibility : NSObject

+ (BOOL)shouldShowAppleRatingsForMapItem:(id)a0;
+ (BOOL)shouldShowMorePhotosGalleryForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowCallToActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowRatingsCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowPhotosCallToActionForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:(id)a0 photoAttribution:(id)a1;
+ (BOOL)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:(id)a0;
+ (BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)a0;
+ (BOOL)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:(id)a0 usingAttributionsByProviderIds:(id)a1;
+ (BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)a0 photoAttribution:(id)a1;
+ (BOOL)_shouldAllowUserToAddContributionsForMapItem:(id)a0;
+ (BOOL)_isMapsApplication;

@end
