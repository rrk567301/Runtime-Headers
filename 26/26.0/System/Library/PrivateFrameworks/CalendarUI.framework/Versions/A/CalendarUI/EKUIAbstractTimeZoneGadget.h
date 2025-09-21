@class NSString, CalUITimeZonePicker;

@interface EKUIAbstractTimeZoneGadget : EKUILabeledGadget <CalUITimeZonePickerDelegate>

@property (retain) CalUITimeZonePicker *timeZonePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)dealloc;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)iconSymbolName;
- (id)control;
- (void)otherSelected:(id /* block */)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (BOOL)shouldShowBothTimeZones;
- (void)timeZoneEnabledPrefChanged;
- (void)timeZoneSelected:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
