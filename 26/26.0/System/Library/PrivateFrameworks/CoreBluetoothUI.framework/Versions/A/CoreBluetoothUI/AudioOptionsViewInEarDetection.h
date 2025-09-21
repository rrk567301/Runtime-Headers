@class NSButton;

@interface AudioOptionsViewInEarDetection : AudioOptionsViewController

@property NSButton *inEarDetectionEnabledCB;

+ (BOOL)peerHasViews:(id)a0;

- (void)viewDidLoad;
- (id)init;
- (void)loadPrefs;
- (void)handleInEarDetection:(id)a0;
- (id)viewsToAlign;

@end
