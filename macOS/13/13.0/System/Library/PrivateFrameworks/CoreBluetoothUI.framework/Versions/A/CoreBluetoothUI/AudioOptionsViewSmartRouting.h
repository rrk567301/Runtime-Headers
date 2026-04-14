@class NSPopUpButton;

@interface AudioOptionsViewSmartRouting : AudioOptionsViewController

@property NSPopUpButton *smartRoutingButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)handleMenu:(id)a0;
- (id)clickOptions;
- (id)keyForSmartRoutingStatus:(int)a0;
- (void)setupPopUp:(id)a0;

@end
