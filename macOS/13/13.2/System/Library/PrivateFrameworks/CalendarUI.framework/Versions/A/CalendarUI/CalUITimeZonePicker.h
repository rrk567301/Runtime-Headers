@protocol CalUITimeZonePickerDelegate;

@interface CalUITimeZonePicker : NSPopUpButton

@property (weak) id<CalUITimeZonePickerDelegate> delegate;
@property BOOL supportsFloating;
@property BOOL includeGMT;
@property BOOL useShortenedLabels;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refresh;
- (void)popUpButtonWillPopUp;
- (void)timeZoneMenuItemSelected:(id)a0;
- (void)otherSelected;
- (void)addTimeZonesToMenu:(id)a0;
- (id)newMenuItemForTimeZone:(id)a0;
- (void)clarifyTimeZonesInMenuWithDuplicateNames;
- (id)displayNameForTimeZone:(id)a0;
- (id)fullNameForTimeZone:(id)a0;
- (id)cachedNameForTimeZone:(id)a0 withStyle:(long long)a1;
- (id)shortNameForTimeZone:(id)a0;
- (id)clarifyingNameForTimeZone:(id)a0;
- (id)menuItemNameForTimeZone:(id)a0;
- (void)selectTimeZone:(id)a0;
- (id)recentlyUsedTimeZones;
- (void)saveRecentlyUsedTimeZone:(id)a0;

@end
