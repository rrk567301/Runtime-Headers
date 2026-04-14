@class NSArray, NSTrackingArea, NSPopUpButton, NSButton;
@protocol SLXShareLocationControllerDelegate;

@interface SLXShareLocationController : NSViewController {
    NSArray *_locations;
    NSTrackingArea *_buttonTrackingArea;
    NSButton *locationButton;
    NSPopUpButton *locationsPopupButton;
}

@property long long status;
@property long long currentLocationIndex;
@property (copy) NSArray *locations;
@property (readonly) id currentLocation;
@property BOOL enabled;
@property (retain) id<SLXShareLocationControllerDelegate> delegate;
@property (copy) id /* block */ updateLocationsBlock;

+ (id)keyPathsForValuesAffectingCurrentLocation;
+ (id)keyPathsForValuesAffectingCurrentLocationDisplayName;

- (void)invalidate;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)isTextDirectionRTL;
- (void)_updateLocationsPopup;
- (id)_titleForLocation:(id)a0;
- (void)_updateLocationsPopupWidth;
- (void)_showAndUpdateArrowImage;
- (void)_showRemoveImage;
- (void)_removeTrackingAreaForButton;
- (void)_addTrackingAreaForButton;
- (id)initWithParentView:(id)a0;
- (void)updateFailedAndIsUnavailable:(BOOL)a0;
- (id)currentLocationDisplayName;
- (void)locationClicked:(id)a0;
- (void)locationPopupChanged:(id)a0;

@end
