@class NSURL, NSString, MUPlaceDataAvailability;

@interface MUPlaceItemActionDataProvider : MKPlaceItemActionDataProvider <MKPlaceActionDataProviding> {
    MUPlaceDataAvailability *_availability;
    char _isDroppedPinOrAddressInSupportedCustomRouteRegion;
}

@property (readonly, nonatomic) char supportsMessagesForBusiness;
@property (readonly, nonatomic) char supportsAddingPhotos;
@property (readonly, nonatomic) NSURL *messagesForBusinessURL;
@property (readonly, nonatomic) char canShowCallAction;
@property (readonly, nonatomic) char isInSupportedCustomRouteRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_placeItemDidUpdate;

@end
