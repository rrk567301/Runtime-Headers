@interface MKPOIEnrichmentAvailibility : NSObject

+ (char)_isMapsApplication;
+ (char)_shouldAllowUserToAddContributionsForMapItem:(id)a0;
+ (char)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:(id)a0;
+ (char)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:(id)a0 usingAttributionsByProviderIds:(id)a1;
+ (char)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:(id)a0 photoAttribution:(id)a1;
+ (char)shouldShowAppleRatingsForMapItem:(id)a0;
+ (char)shouldShowCallToActionForMapItem:(id)a0;
+ (char)shouldShowCallToActionForMapItem:(id)a0 options:(unsigned long long)a1;
+ (char)shouldShowMorePhotosGalleryForMapItem:(id)a0;
+ (char)shouldShowPhotosCallToActionForMapItem:(id)a0;
+ (char)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)a0;
+ (char)shouldShowRatingsCallToActionForMapItem:(id)a0;
+ (char)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)a0 photoAttribution:(id)a1;

@end
