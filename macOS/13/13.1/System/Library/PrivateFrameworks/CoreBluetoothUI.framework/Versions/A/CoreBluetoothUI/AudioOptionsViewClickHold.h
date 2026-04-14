@class NSButton, NSPopUpButton, NSTextField;

@interface AudioOptionsViewClickHold : AudioOptionsViewController

@property NSTextField *labelClickHoldVolume;
@property NSButton *cbClickHoldVolume;
@property NSTextField *popUpLabelLeft;
@property NSPopUpButton *popUpClickHoldLeft;
@property NSTextField *popUpLabelRight;
@property NSPopUpButton *popUpClickHoldRight;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (id)clickOptions;
- (BOOL)supportsVolumeMode;
- (BOOL)isInVolumeMode;
- (id)keyForGestureMode:(unsigned char)a0;
- (void)setupPopUp:(id)a0 withCtrlName:(id)a1 andLabel:(id)a2;
- (void)updatePopUps;
- (void)updatePopUp:(id)a0;
- (id)ctrlNameForPopUp:(id)a0;
- (id)popUpForControlStr:(id)a0;
- (void)selectGM:(unsigned char)a0 inPopUpWithControlStr:(id)a1;
- (BOOL)isVolumeValue:(unsigned char)a0;
- (void)handlePopUp:(id)a0;
- (void)handleVolumeCB:(id)a0;

@end
