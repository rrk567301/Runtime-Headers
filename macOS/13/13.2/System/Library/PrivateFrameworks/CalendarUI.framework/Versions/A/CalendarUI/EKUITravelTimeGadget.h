@class NSMenuItem, NSString, CalLocation, EKUIPopUpButton, EKUITravelTimeSpinnerView, NSMutableDictionary, NSSet, NSMutableSet;

@interface EKUITravelTimeGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *popUpButton;
@property (retain) NSMutableDictionary *validRoutes;
@property (retain) NSMutableSet *currentlyCalculatingRoutes;
@property (retain) NSMutableSet *errorRoutes;
@property (retain) NSSet *supportedRouteTypes;
@property long long selectedDuration;
@property (copy) NSString *lastEventIdentifier;
@property (retain) NSString *lastLocation;
@property (retain) CalLocation *startLocation;
@property (retain) EKUITravelTimeSpinnerView *spinnerView;
@property (retain) NSMenuItem *calculatingRoutesPlaceholderMenuItem;
@property (retain) NSMenuItem *routesSectionTopSeparator;
@property (retain) NSMenuItem *routesSectionBottomSeparator;

+ (id)interestedChangeKeys;
+ (void)_messageTraceTravelTimeDurationSelected:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)popUpButtonClicked:(id)a0;
- (void)showCustomTravelTimePicker:(id)a0;
- (void)durationChosen:(id)a0;
- (void)_populatePopUpButton;
- (void)_addRoutesSectionIfNeeded;
- (id)_validRouteMenuItems;
- (void)_updateRoutesSectionWithValidResults;
- (void)_addCustomItemIfNeeded;
- (id)_formattedStringForTimeInterval:(double)a0;
- (id)_menuItemWithDuration:(long long)a0 andTitle:(id)a1;
- (void)_asyncUpdateMenuAndStartLocationWithResults:(id)a0;
- (void)_asyncUpdateTravelTimeMenuWithResults:(id)a0;
- (void)_asyncUpdateStartLocationWithResults:(id)a0;
- (void)_resetTravelTimeResults;
- (void)_calculateTravelTime;
- (id)_imageForRouteType:(id)a0;
- (BOOL)startingCountryEqualsEndingCountry;
- (id)_localizeTravelTimeChoiceStringWithDuration:(double)a0 fromLocation:(id)a1 includeLocationDescription:(BOOL)a2;
- (id)_findEventStartLocation;

@end
