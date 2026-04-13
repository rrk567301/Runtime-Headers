@class NSString, CalUITimeZonePicker;

@interface EKUIAbstractTimeZoneGadget : EKUILabeledGadget <CalUITimeZonePickerDelegate>

@property (retain) CalUITimeZonePicker *timeZonePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)dealloc;
- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (BOOL)shouldShowBothTimeZones;
- (void)timeZoneSelected:(id)a0;
- (void)timeZoneEnabledPrefChanged;
- (void)otherSelected:(id /* block */)a0;

@end
