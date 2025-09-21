@class MKMapItem;

@interface MUPlaceDataAvailability : NSObject {
    MKMapItem *_mapItem;
    unsigned long long _placeCardOptions;
    char _myPlacesEnabled;
    char _hikingIOSEnabled;
}

@property (readonly, nonatomic) char supportsPhotoSlider;
@property (readonly, nonatomic) char supportsAmenities;
@property (readonly, nonatomic) char supportsRelatedPlaces;
@property (readonly, nonatomic) char supportsHeaderContainment;
@property (readonly, nonatomic) char suportsOfficialApp;
@property (readonly, nonatomic) char supportsHours;
@property (readonly, nonatomic) char supportsCuratedGuidesCarousel;
@property (readonly, nonatomic) char supportsEncyclopedicDescription;
@property (readonly, nonatomic) char supportsWebContent;
@property (readonly, nonatomic) char supportsVenueTextInfo;
@property (readonly, nonatomic) char supportsAnnotatedPhotos;
@property (readonly, nonatomic) char supportsAnnotatedTextList;
@property (readonly, nonatomic) char shouldShowRatingsAndReviewsModule;
@property (readonly, nonatomic) char supportsBrowseCategory;
@property (readonly, nonatomic) char supportsPlaceAttribution;
@property (readonly, nonatomic) char supportsInlineMap;
@property (readonly, nonatomic) char supportsInlinePOIMap;
@property (readonly, nonatomic) char isTransitItem;
@property (readonly, nonatomic) char allowTransitLineSelection;
@property (readonly, nonatomic) char hasRatingsOrReviews;
@property (readonly, nonatomic) char supportsReportAnIssue;
@property (readonly, nonatomic) char supportsInlineReportAnIssue;
@property (readonly, nonatomic) char supportsReportsInReview;
@property (readonly, nonatomic) char supportsShowingCoordinates;
@property (readonly, nonatomic) char supportsMessageHours;
@property (readonly, nonatomic) char supportsPlaceDescription;
@property (readonly, nonatomic) char supportsCallToAction;
@property (readonly, nonatomic) char supportsAddingPhotos;
@property (readonly, nonatomic) char supportsPhotoOnlyDataCollection;
@property (readonly, nonatomic) char showEditAddressForHome;
@property (readonly, nonatomic) char supportsPlaceEnrichment;
@property (readonly, nonatomic) char canShowDirections;
@property (readonly, nonatomic) char supportsInlineRatings;
@property (readonly, nonatomic) char supportsSharing;
@property (readonly, nonatomic) char supportsMessagesForBusiness;
@property (readonly, nonatomic) char supportsEVCharging;
@property (readonly, nonatomic) char supportsHikingTrails;
@property (readonly, nonatomic) char supportsHikingTip;
@property (readonly, nonatomic) char supportsAppleRatings;
@property (readonly, nonatomic) char supportsPlaceNotes;
@property (readonly, nonatomic) char isRouteCreationAvailable;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 options:(unsigned long long)a1;
- (char)_hasAppleRatingsCategories;

@end
