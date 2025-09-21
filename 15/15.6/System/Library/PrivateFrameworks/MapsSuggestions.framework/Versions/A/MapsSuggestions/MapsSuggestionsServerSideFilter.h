@class NSString;

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    char _enabledEntryTypeUnknown;
    char _enabledEntryTypeHome;
    char _enabledEntryTypeWork;
    char _enabledEntryTypeCalendarEvent;
    char _enabledEntryTypeFrequentLocation;
    char _enabledEntryTypeRecentHistory;
    char _enabledEntryTypeOldPreYukonFavorite;
    char _enabledEntryTypeParkedCar;
    char _enabledEntryTypeRestaurantReservation;
    char _enabledEntryTypeRidesharing;
    char _enabledEntryTypeCarPlayLowEnergy;
    char _enabledEntryTypeResumeRoute;
    char _enabledEntryTypeAppConnection;
    char _enabledEntryTypeHotel;
    char _enabledEntryTypeCarRental;
    char _enabledEntryTypeTravelFlight;
    char _enabledEntryTypeTicketedEvent;
    char _enabledEntryTypePortrait;
    char _enabledEntryTypeUserPlace;
    char _enabledEntryTypeSchool;
    char _enabledEntryTypeVehicleSetup;
    char _enabledEntryTypeFavoriteButton;
    char _enabledEntryTypeOrderStatus;
    char _enabledEntryTypeContactActivity;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isEnabled;

- (id)init;
- (char)shouldKeepEntry:(id)a0;

@end
